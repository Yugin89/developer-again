// Copyright Pandores Marketplace 2021. All Rights Reserved.

#include "BlueprintXMLLibrary.h"
#include "BlueprintXMLWrapper.h"

UXmlFile* UBlueprintXmlLibrary::LoadFile(const FString& File, EXmlParseResult& Branches)
{
	UXmlFile* const XmlFile = NewObject<UXmlFile>();

	if (XmlFile->LoadFile(File))
	{
		Branches = EXmlParseResult::Success;
	}
	else
	{
		Branches = EXmlParseResult::Failed;
	}

	return XmlFile;
}

UXmlFile* UBlueprintXmlLibrary::LoadXmlString(const FString& XmlRawString, EXmlParseResult& Branches)
{
	UXmlFile* const XmlFile = NewObject<UXmlFile>();

	if (XmlFile->LoadFromString(XmlRawString))
	{
		Branches = EXmlParseResult::Success;
	}
	else
	{
		Branches = EXmlParseResult::Failed;
	}

	return XmlFile;
}

void UBlueprintXmlLibrary::SaveXmlToFile(UXmlFile* const FileToSave, const FString& SavePath, EXmlParseResult& Branches)
{
	const bool bSuccess = FileToSave && FileToSave->SaveToFile(SavePath);
	if (bSuccess)
	{
		Branches = EXmlParseResult::Success;
	}
	else
	{
		Branches = EXmlParseResult::Failed;
	}
}
