#include <iostream>
using namespace std;

struct TrieNode{
    TrieNode *child[26];
    bool End = true;
    TrieNode();
};
bool Search_Item(struct TrieNode* root, string key);
int Count_Item(struct TrieNode* root);
bool Check_Is_Empty(TrieNode* root);


