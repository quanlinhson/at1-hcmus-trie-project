#include <iostream>
using namespace std;

struct TrieNode
{
    TrieNode* child[26];
    bool End = false;
    TrieNode();
};

bool searchItem(TrieNode* Root, string Key);
int countItem(TrieNode* Root);
bool isEmpty(TrieNode* Root);
void insertItem(TrieNode* root, string key);
TrieNode* removeItem(TrieNode *&root, string key, int depth = 0);
TrieNode* removeAll(TrieNode *&root,string a[],int n);
TrieNode* BuildTrie(TrieNode* root, istream &input, string *&keys, int &n);
