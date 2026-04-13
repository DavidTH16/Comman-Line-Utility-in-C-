/*

This file describes the implementation for a basic word counter
in a string. To resolve this challenge we focused on detect a toggle once an alphabet 
character is detected.

*/


#include <iostream>
#include <string>
#include "word_counter.h"

using namespace std;

// function to show the main menu
void wordMenu(){
    cout << "\n=== Basic word counter ===" << endl;
    cout << "1. Count words" << endl;
    cout << "2. Exit Basic word counter" << endl;
}

//function the select the user's option and perform the operation
void countOption(){

    // vairables to use: user input, check loop exit
    int userOption=0;
    bool exitProgram =false;
    string str;

    //loop to check the user input and execute logic
    while (!exitProgram)
    {
        
        cout << "Enter a valid option (1-2):";
        cin >> userOption;

        //check if menu option is valid
        if (userOption ==1 ){
            cout << "Enter the phrase:";
            cin.ignore(); // Ignore leftover newline from cin >> userOption
            getline(cin, str);

            cout << "You entered: " << str << endl;
        }


        switch (userOption)
        {
        case 1:
            // count the words
            cout << "Result: " << countWord(str);
            wordMenu();
            break;

        case 2:
            // exits from the main menu
            cout << "Thanks for using word counter";
            exitProgram=true;
            break;
        
        default:
            // if not-valid option
            cout << "--> Please enter a valid input (1-2)" << endl;  
            wordMenu();
            break;
        }

    }
}


// function to return the number of words in the string
int countWord(const string& phrase){
    
    //return 0 if phrase is empty
    if (phrase.empty()){
        return 0;
    }

    //var to execute: count words and register once a word is found
    int wordCount = 0;
    bool inWord = false;
    
    //iterate in the phrase by each element
    // if not word then count the word and then set flag as false until 
    // different character appears.
    for (char c : phrase){
        if (!isalpha(c)){
            if (inWord){
            wordCount++;
            inWord=false;
            }
        }
        else{
            inWord=true;
        }
    }
    if (inWord) wordCount++;
    return wordCount;
}
