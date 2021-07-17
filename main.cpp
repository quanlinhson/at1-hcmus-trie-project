#include "trie.hpp"

int main(int argc, char *argv[])
{
    string keys[] = { "by","bye", "their","the", "heroplan", "heroplane","hero" };
    int n = sizeof(keys) / sizeof(keys[0]);

    TrieNode* root = new TrieNode;

    for (int i = 0; i < n; i++)
    {
        insertItem(root, keys[i]);
    }

    searchItem(root, "the") ? cout << "Yes\n" : cout << "No\n";
    searchItem(root, "their") ? cout << "Yes\n" : cout << "No\n";

    removeItem(root, "heroplane");
    searchItem(root, "heroplan") ? cout << "Yes\n" : cout << "No\n";
    searchItem(root, "heroplane") ? cout << "Yes\n" : cout << "No\n";
    searchItem(root, "her") ? cout << "Yes\n" : cout << "No\n";
    cout << countItem(root) << endl;
    return 0;
}

