/*
This file describes the implementation to detect if a
a word is a palidrom, splitting the word in half and
interacting the word from left-side to half-world, and from
right-side to half-word.
*/

#include <iostream>
#include <string>
#include "word_palidrom.h"

using namespace std;


// function to implement the main menu
void palidMenu(){
    cout << "\n=== Palidrom word ===" << endl;
    cout << "1. Word" << endl;
    cout << "2. Exit Palidrom word " << endl;
}

//function to implement the selection option
void palidOption(){

    // vairables to use: user input, check loop exit
    int userOption=0;
    bool exitProgram =false;
    string str;

    while (!exitProgram)
    {
        cout << "Enter a valid option (1-2):";
        cin >> userOption;

        //check if menu option is valid
        if (userOption ==1 ){
            cout << "Enter the word to check:";
            cin.ignore(); // Ignore leftover newline from cin >> userOption
            getline(cin, str);
            cout << "You entered: " << str << endl;
        }    

        switch (userOption)
        {
        case 1:
            // check the word
            cout << "Result: " << palidWord(str);
            palidMenu();
            break;

        case 2:
            // exit the program
            cout << "Thanks for using word counter";
            exitProgram=true;
            break;
        
        default:
            //ask again for a valida input
            cout << "--> Please enter a valid input (1-2)" << endl;  
            palidMenu();
            break;
        }

    }
    

}

// function to detect if the world is or not palidrom
// receive the string and process it.  
bool palidWord(const string& word){

    //variable length from string word.
    // bool to return if or not the word is palidrom.
    int length= word.length();
    bool is_palidrom=false;

    //iterate in the word
    for(int i = 0; i < length/2 ; i++){
        if((word[i]==word[length-i-1])){
            is_palidrom =true;
            
        }
        else{
            is_palidrom=false;
            continue;
        }
    }

    return is_palidrom;
}