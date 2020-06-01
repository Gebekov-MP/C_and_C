
//tree
typedef struct node
{
    bool word;
    struct node *children[26];
}
node;
//trie
typedef struct _trie 
{
    char university[20];
    struct _trie* path[10];
}
trie;