#include "Telegraph.h"//included Telegraph header file 
void Telegraph::DestroyTree(Tnode *root)//private funciton
{//Destroy tree is a recursive function
    if(root)//this is the recursive case
    { //deletes the memory on both sides 
        DestroyTree(root->left);
        DestroyTree(root->right);
        delete root; //delets root pointer
    }
}
void Telegraph::DestroyTree()//public function
{
    DestroyTree(root);
    root = 0;
}
