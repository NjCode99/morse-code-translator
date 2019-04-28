#include "Telegraph.h"//included telegrapgh header file
#include <iostream>//included iostream library file
#include <cctype>//included ccytype library file
std::string Telegraph::encode(std::string msg)
{
	std::string morse; int i ,j; char k;
    //three variables declared here
    for(i = 0; i < msg.size(); i++)
    //for loop
    //as long as I is less than the size of msg this loop will run 
    //i will increment at every loop 
    { k = toupper(msg[i]);
        if(k == ' ')
        {
            morse+= " ";
            continue;
        }
    
    for(j = 0; table[j].symbol; j++)// will comapre the msg to table 
    //containing the morsecode information 
        if(table[j].symbol == k) break;
        if(!table[j].symbol)
            continue;
        morse+= table[j].code;
        morse+= " ";
    
}
    return morse;
}

