#include <iostream>
using namespace std;

struct TrieNode{
    TrieNode *child[26];
    bool End = true;
    TrieNode();
};