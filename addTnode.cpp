#include "Telegraph.h" //the Telegraph header file containg 
    //the class Telegraph is included her

void Telegraph::addTnode(char c, Tnode* node, Tnode*& next)
{//void function addTnode contains four parameters
    //those four parameters are in the same order as it is in the class
//char c, Tnode *& node, Tnode* next
    if(c == DOT)//if the character is a dot the following code will run
    {
		next = node->left;// goes to the left 
        if(not next)
        {
            next = new Tnode;
            node->left = next;
        }
    }
    else if(c ==DASH)//if character is a dash the following code will run 
    {
		next = node->right;
        if(not next)
        {
            next = new Tnode;
            node->right = next;
        }
    }
}
