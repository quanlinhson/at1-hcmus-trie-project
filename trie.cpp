#include "trie.hpp"

TrieNode::TrieNode(){
    for (unsigned short int i = 0; i<26; i++) child[i]=NULL;
}
bool Search_Item(TrieNode* Root, string Key)
{
	TrieNode* Temp = Root;

	for (int i = 0; i < Key.length(); i++)
	{
		int index = Key[i] - 'a';
		if (!Temp->child[index])
		{
		   return false;
		}
		Temp = Temp->child[index];
	}

	return (Temp->End);
}
int Count_Item(TrieNode* Root)
{
	int Count = 0;

	if (Root->End)
	{
		Count++;
	}
	for (int i = 0; i < 26; i++)
	{
		if (Root->child[i])
		{
			Count += Count_Item(Root->child[i]);
		}
	}

	return Count;
}
bool Check_Is_Empty(TrieNode* Root)
{
	TrieNode* Temp = Root;
	for (int i = 0; i < 26; i++)
	{
		if (Temp->child[i])
		{
			return false;
		}
	}
	return true;

}
