// Copyright Pandores Marketplace 2021. All Rights Reserved.

#include "BlueprintXMLWrapper.h"

/* static */ UXmlNode* UXmlNode::CreateNode(FXmlNode* const Node)
{
	if (!Node)
	{
		return nullptr;
	}

	UXmlNode* const WrapperNode = NewObject<UXmlNode>();

	WrapperNode->Node = Node;

	return WrapperNode;
}

UXmlNode::UXmlNode()
	: Super()
	, Node(nullptr)
{}

void UXmlNode::SetContent(const FString& Content)
{
	Node->SetContent(Content);
}

UXmlNode* UXmlNode::FindChildNode(const FString& Tag, bool& bFound)
{
	FXmlNode* const RawNode = Node->FindChildNode(Tag);

	if (!RawNode)
	{
		bFound = false;
		return nullptr;
	}

	bFound = true;

	return CreateNode(RawNode);
}

void UXmlNode::AppendChildNode(const FString& Tag, const FString& Content)
{
	Node->AppendChildNode(Tag, Content);
}

FString UXmlNode::GetAttribute(const FString& InTag) const
{
	return Node->GetAttribute(InTag);
}

TMap<FString, FString> UXmlNode::GetAttributes() const
{
	TMap<FString, FString> OutAttributes;
	const TArray<FXmlAttribute>& Attributes= Node->GetAttributes();
	OutAttributes.Reserve(Attributes.Num());

	for (const auto& Attribute : Attributes)
	{
		OutAttributes.Emplace(Attribute.GetTag(), Attribute.GetValue());
	}

	return OutAttributes;
}

TArray<UXmlNode*> UXmlNode::GetChildrenNodes() const
{
	TArray<UXmlNode*> OutNodes;
	const TArray<FXmlNode*>& Nodes = Node->GetChildrenNodes();
	OutNodes.Reserve(Nodes.Num());

	for (auto& ChildNode : Nodes)
	{
		OutNodes.Emplace(CreateNode(ChildNode));
	}

	return OutNodes;
}

FString	UXmlNode::GetContent() const
{
	return Node->GetContent();
}

UXmlNode* UXmlNode::GetFirstChildNode()
{
	const TArray<FXmlNode*>& Children = Node->GetChildrenNodes();
	if (Children.Num() > 0)
	{
		return CreateNode(Children[0]);
	}
	return nullptr;
}

UXmlNode* UXmlNode::GetNextNode() const
{
	// Can't avoid const_cast here.
	// It's ok though as the internal functions rely heavily on it
	// and the base pointer is not const at all.
	return CreateNode(const_cast<FXmlNode*>(Node->GetNextNode()));
}

FString	UXmlNode::GetTag() const
{
	return Node->GetTag();
}

UXmlFile::UXmlFile()
	: Super()
	, XmlFile()
{}

bool UXmlFile::LoadFile(const FString& File)
{
	return XmlFile.LoadFile(File);
}

bool UXmlFile::LoadFromString(const FString& RawXml)
{
	return XmlFile.LoadFile(RawXml, EConstructMethod::ConstructFromBuffer);
}

FString UXmlFile::GetLastError() const
{
	return XmlFile.GetLastError();
}

bool UXmlFile::IsValid() const
{
	return XmlFile.IsValid();
}

UXmlNode* UXmlFile::GetRootNode(bool & bIsValid)
{
	FXmlNode* const RawNode = XmlFile.GetRootNode();

	if (!RawNode)
	{
		bIsValid = false;
		return nullptr;
	}

	bIsValid = true;

	return UXmlNode::CreateNode(RawNode);
}

bool UXmlFile::SaveToFile(const FString& Path)
{
	return XmlFile.Save(Path);
}
