#include <iostream> //includes iostream library
#include "Telegraph.h" //includes the Telegraph header file containing Telegraph class
int main()
//int main function that contains all code that will dictate what is 
//displayed in the terminal
{
	
    std::cout << "Morse Code Translator \n"; // this will be displayed in the terminal
	std::cout << "________________________ \n"<<std::endl; //this will 
    //be displayed in the terminal
	std::cout<<"Welcome to the Morse Code Translator"<<std::endl; //this
    // will be displayed in the terminal
	std::cout<<"Enter a message and have it translated into morsecode"<<std::endl;
    //this will be displayed in the terminal
		Telegraph::buildTree(); //calls the buildtree function
		Telegraph t; //creates variable t of type Telegraph in order to 
        //access the functions within the Telegraph class
		std::string msg; std::string recvMsg; //msg variable to send 
        //messages for translation and recvMsg variable to recieve the
        // messages and get them back
		std::string morsecode; //string morsecode variable created
		std::cout << "Please enter the message you wish to translate"<<std::endl;
        //this will be displayed in the terminal
		std::cout << "Enter your message here:";
        //this will be displayed in the terminal
		getline(std::cin, msg); 
        //getline function used to get message from the user and store 
        //it in msg variable
		morsecode = t.encode(msg); //morsecode variable will store the 
        //translated message that the user has given
		std::cout << morsecode << std::endl; 
        //morsecode will be displayed in the terminal
		recvMsg = t.decode(morsecode); 
        //recvMsg variable stores the decoded morsecode message
		std::cout << recvMsg << std::endl;
        //recvMsg is diplayed in the terminal
		Telegraph::DestroyTree(); //static member
	
}
