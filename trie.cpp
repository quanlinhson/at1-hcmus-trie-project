#include "trie.hpp"

TrieNode::TrieNode(){
    for (unsigned short int i = 0; i<26; i++) child[i]=NULL;
}