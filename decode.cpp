#include "Telegraph.h"// included header file contain Telegraph class
#include <cctype>//included library file 
std::string Telegraph::decode(std::string morse)
{//this function contains one string parameter
    std::string msg;//string variable msg declared
    Tnode *node;// pointer node of type Tnode declared 
    node = root; // node is equal to root
    for(int i = 0; i < morse.size(); i++)// for when i is less than
    //the size of morse the following code will run and at every loop
    // i will increment
    {
        if(morse[i] == DOT)//morse is treated like an array 
        //if morse[i] contains a dot the code will execute
        {
            node = node->left;//the node will point to the left
        }
        else if(morse[i] == DASH)// if morse[i] is a dash 
        {
            node = node->right; //the node will point to the right 
        }
        else //else this code will execute
        {
            msg+= node->symbol;
            node = root;
        }
    }
    return msg;//return the message to the terminal
}

