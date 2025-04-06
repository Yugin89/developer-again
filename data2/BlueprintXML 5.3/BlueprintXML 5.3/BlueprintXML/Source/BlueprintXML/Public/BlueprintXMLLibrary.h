// Copyright Pandores Marketplace 2021. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BlueprintXMLLibrary.generated.h"

class UXmlFile;

/**
 *  Used for output nodes.
 **/
UENUM()
enum class EXmlParseResult : uint8
{
    Success,
    Failed
};

/**
 *  Library containing helper functions to work with XML
 **/
UCLASS()
class UBlueprintXmlLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
    /* Load the specified XML file. */
    UFUNCTION(BlueprintCallable, Category = XML, meta = (ExpandEnumAsExecs = Branches), DisplayName = "Load XML File")
    static UPARAM(DisplayName = "Parsed XML file") UXmlFile* LoadFile(const FString & File, EXmlParseResult & Branches);

    /* Create an XML file from a string input */
    UFUNCTION(BlueprintCallable, Category = XML, meta = (ExpandEnumAsExecs = Branches), DisplayName = "Load XML from String")
    static UPARAM(DisplayName = "Parsed XML") UXmlFile* LoadXmlString(const FString& XmlRawString, EXmlParseResult& Branches);

    /* Save this XML to a file on the disk. */
    UFUNCTION(BlueprintCallable, Category = XML, meta = (ExpandEnumAsExecs = Branches), DisplayName = "Save XML to File")
    static void SaveXmlToFile(UXmlFile*const FileToSave, const FString& SavePath, EXmlParseResult& Branches);
};
