// Copyright Pandores Marketplace 2021. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Async/Future.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "BlueprintXMLNodes.generated.h"

class UXmlFile;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLoadXmlFileEvent, UXmlFile* const, XmlFile);
DECLARE_DYNAMIC_MULTICAST_DELEGATE         (FSaveXmlFileEvent);

/**
 *  Base class for async loading of XML files.
 **/
UCLASS()
class ULoadXmlAsyncProxyBase : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
    virtual void Activate() override {};

    /* Called when the file has been loaded successfully. */
    UPROPERTY(BlueprintAssignable)
    FLoadXmlFileEvent Success;

    /* Called when the file failed to load. */
    UPROPERTY(BlueprintAssignable)
    FLoadXmlFileEvent Failed;

protected:
    void OnLoadingOver();

    TFuture<UXmlFile*> File;
};

/**
 *  Load an XML file outside of the game thread
 **/
UCLASS()
class ULoadXmlFromFileAsyncProxy : public ULoadXmlAsyncProxyBase
{
    GENERATED_BODY()
public:
    /* Load an XML file and parse it asynchronously. */
    UFUNCTION(BlueprintCallable, Category = XML, meta = (BlueprintInternalUseOnly = "true", DisplayName = "Load XML File Async"))
    static ULoadXmlFromFileAsyncProxy* LoadXmlFileAsync(FString FilePath);
};
    
/**
 *  Load an XML string outside of the game thread
 **/
UCLASS()
class ULoadXmlFromStringAsyncProxy : public ULoadXmlAsyncProxyBase
{
    GENERATED_BODY()
public:
    /* Parse the content of the string to create an XML object asynchronously */
    UFUNCTION(BlueprintCallable, Category = XML, meta = (BlueprintInternalUseOnly = "true", DisplayName = "Load XML String Async"))
    static ULoadXmlFromStringAsyncProxy* LoadXmlStringAsync(FString XmlString);
};


/**
 *  Proxy for saving asynchronously virtual XML Files to disk.
 **/
UCLASS()
class USaveXmlFileAsyncProxyBase : public UBlueprintAsyncActionBase
{
    GENERATED_BODY()
public:
    /* Called when the file has been saved successfully. */
    UPROPERTY(BlueprintAssignable)
    FSaveXmlFileEvent Success;

    /* Called when the file failed to save. */
    UPROPERTY(BlueprintAssignable)
    FSaveXmlFileEvent Failed;

    /* Save a virtual XML file object to a file on the disk asynchronously. */
    UFUNCTION(BlueprintCallable, Category = XML, meta = (BlueprintInternalUseOnly = "true", DisplayName = "Save XML File Async"))
    static USaveXmlFileAsyncProxyBase* SaveXmlFileAsync(UXmlFile* const FileToSave, FString Path);

    virtual void Activate() override;

private:
    void PostFileSaved(const bool bSuccess);

private:
    UXmlFile* FileToSave;
    FString Path;
};

