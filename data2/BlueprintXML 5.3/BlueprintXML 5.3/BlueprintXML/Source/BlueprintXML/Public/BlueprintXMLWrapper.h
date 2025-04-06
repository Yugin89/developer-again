// Copyright Pandores Marketplace 2021. All Rights Reserved.

#pragma once

#include "XmlFile.h"
#include "CoreMinimal.h"
#include "BlueprintXMLWrapper.generated.h"

UENUM()
enum class EXMLNodeValidity : uint8
{
    Valid,
    Invalid
};

/**
 *  And XML node containing other nodes and attributes.
 **/
UCLASS(BlueprintType)
class UXmlNode : public UObject
{
    GENERATED_BODY()
public:
    UXmlNode();

    /**
     *  Creates a UObject node from a raw node.
     *  @returns The new node or nullptr if the raw node is invalid.
     **/
    static UXmlNode* CreateNode(FXmlNode* const Node);

    /**
     *  Returns the attribute specified by the tag.
     **/
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="XML|Node")
    UPARAM(DisplayName = "Attribute") FString GetAttribute(const FString& InTag) const;

    /* Returns all the attributes of this node. */
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="XML|Node")
    UPARAM(DisplayName = "Out Attributes") TMap<FString, FString> GetAttributes() const;

    /* Returns all the children of this node. */
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="XML|Node")
    UPARAM(DisplayName = "Out Nodes") TArray<UXmlNode*> GetChildrenNodes() const;

    /* Returns this node's content. */
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="XML|Node")
    UPARAM(DisplayName = "Content") FString GetContent() const;

    /* Returns the node's first direct child. */
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="XML|Node")
    UPARAM(DisplayName = "First Child") UXmlNode* GetFirstChildNode();

    /* Returns the next node on the same level as this one. */
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="XML|Node")
    UPARAM(DisplayName = "Next Node") UXmlNode* GetNextNode() const;

    /* Returns this node's tag. */
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="XML|Node")
    UPARAM(DisplayName = "Node's Tag") FString GetTag() const;

    /* Adds a child node directrly to this node. */
    UFUNCTION(BlueprintCallable, Category="XML|Node")
    void AppendChildNode(const FString& Tag, const FString& Content);

    /* Returns the first direct child with the matching tag or nullptr if it wasn't found. */
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="XML|Node")
    UPARAM(DisplayName = "Child Node") UXmlNode* FindChildNode(const FString & Tag, bool & bFound);

    /* Sets this node's content. */
    UFUNCTION(BlueprintCallable, Category="XML|Node")
    void SetContent(const FString& Content);

private:
    FXmlNode* Node;

};


/**
 *  An XML file, containing zero, one or several nodes.
 **/
UCLASS(BlueprintType)
class UXmlFile : public UObject
{
	GENERATED_BODY()
public:
    UXmlFile();

    /* Load a raw XML file into this File object. */
    UFUNCTION(BlueprintCallable, Category = "XML|File")
    UPARAM(DisplayName = "Is Loaded") bool LoadFile(const FString& File);

    /* Load the XML contained directly in the String. */
    UFUNCTION(BlueprintCallable, Category = "XML|File")
    UPARAM(DisplayName = "Is Loaded") bool LoadFromString(const FString& RawXml);

    /* Returns the last error which occured. */
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "XML|File")
    UPARAM(DisplayName = "Error") FString GetLastError() const;

    /* Returns if this File is valid. If we can safely access its nodes. */
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "XML|File")
    UPARAM(DisplayName = "Is Valid") bool IsValid() const;

    /* Returns this file's root node. Each file must have one and only one node. */
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "XML|File")
    UPARAM(DisplayName = "Root Node") UXmlNode* GetRootNode(bool& bIsValid);

    /* Save this XML representation to a file. */
    UFUNCTION(BlueprintCallable, Category = "XML|File")
    UPARAM(DisplayName = "Is Saved") bool SaveToFile(const FString& Path);

private:
    FXmlFile XmlFile;
};
