#include "tree.h"

void removeLeaves(BinaryTree *&root)
{
    if(!root->left && !root->right)
    {
        delete root;
    }
   removeLeaves(root->left);
   removeLeaves(root->right); 
}

