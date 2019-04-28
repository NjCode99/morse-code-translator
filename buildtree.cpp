#include "morseCode.h" //included the table 
Tnode *Telegraph::root = 0;
void Telegraph::buildTree()
{
    Tnode *node, *nextnode; int i; char *dd;//dd is a pointer that
    //points to dots and dashes from the morsecode that is in a string
    root = new Tnode; if(!root) return;
    root->symbol = ' '; // create the root node
    for(i = 0; table[i].symbol; i++)// for loop 
    { node = root;
    for(dd = table[i].code; *dd; dd++)//for loop 
    {
    addTnode(*dd,node,nextnode); //addTnode function called here
    node = nextnode;
    }
    node->symbol = table[i].symbol;
    }
}
