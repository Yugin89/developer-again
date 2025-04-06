// Copyright Pandores Marketplace 2021. All Rights Reserved.

#include "BlueprintXMLNodes.h"
#include "Async/TaskGraphInterfaces.h"
#include "Async/Async.h"
#include "BlueprintXMLWrapper.h"
#include "BlueprintXMLLibrary.h"

void ULoadXmlAsyncProxyBase::OnLoadingOver()
{
	AsyncTask(ENamedThreads::GameThread, [this]()
	{
		if (File.IsReady())
		{
			UXmlFile* const XmlFile = File.Get();

			if (XmlFile && XmlFile->IsValid())
			{
				Success.Broadcast(XmlFile);
			}
			else
			{
				Failed.Broadcast(XmlFile);
			}
		}
		else
		{
			Failed.Broadcast(nullptr);
		}

		SetReadyToDestroy();
	});
}

/* static */ ULoadXmlFromFileAsyncProxy* ULoadXmlFromFileAsyncProxy::LoadXmlFileAsync(FString FilePath)
{
	ULoadXmlFromFileAsyncProxy* const Proxy = NewObject<ULoadXmlFromFileAsyncProxy>();

	Proxy->File = Async(EAsyncExecution::ThreadPool, [FilePath = MoveTemp(FilePath)]() -> UXmlFile* {
		EXmlParseResult Res;
		return UBlueprintXmlLibrary::LoadFile(FilePath, Res);
	}, [Proxy]() {
		Proxy->OnLoadingOver();
	});

	return Proxy;
}

/* static */ ULoadXmlFromStringAsyncProxy* ULoadXmlFromStringAsyncProxy::LoadXmlStringAsync(FString XmlString)
{
	ULoadXmlFromStringAsyncProxy* const Proxy = NewObject<ULoadXmlFromStringAsyncProxy>();

	Proxy->File = Async(EAsyncExecution::ThreadPool, [XmlString = MoveTemp(XmlString)]() -> UXmlFile* {
		EXmlParseResult Res;
		return UBlueprintXmlLibrary::LoadXmlString(XmlString, Res);
	}, [Proxy]() {
		Proxy->OnLoadingOver();
	});

	return Proxy;
}

void USaveXmlFileAsyncProxyBase::PostFileSaved(const bool bSuccess)
{
	if (bSuccess)
	{
		Success.Broadcast();
	}
	else
	{
		Failed.Broadcast();
	}

	SetReadyToDestroy();
}

/* static */ USaveXmlFileAsyncProxyBase* USaveXmlFileAsyncProxyBase::SaveXmlFileAsync(UXmlFile* const FileToSave, FString Path)
{
	USaveXmlFileAsyncProxyBase* const Proxy = NewObject<USaveXmlFileAsyncProxyBase>();

	Proxy->Path = MoveTemp(Path);
	Proxy->FileToSave = FileToSave;

	return Proxy;
}

void USaveXmlFileAsyncProxyBase::Activate()
{
	if (FileToSave)
	{
		FileToSave->AddToRoot();
		AsyncTask(ENamedThreads::AnyThread, [ProxyPtr = TWeakObjectPtr<ThisClass>(this), _FileToSave = this->FileToSave, _Path = MoveTemp(Path)]() mutable -> void
		{
			const bool bSuccess = _FileToSave->SaveToFile(_Path);
			AsyncTask(ENamedThreads::GameThread, [_FileToSave = MoveTemp(_FileToSave), ProxyPtr = MoveTemp(ProxyPtr), bSuccess]() -> void
			{
				_FileToSave->RemoveFromRoot();
				if (ProxyPtr.IsValid())
				{
					ProxyPtr->PostFileSaved(bSuccess);
				}
			});
		});
	}

	else
	{
		PostFileSaved(false);
		SetReadyToDestroy();
	}
}
