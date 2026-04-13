/*
This project is a Command line utility with 4 utility functions
Author : David Torres
Data: 2026-03-29

*/
#include <iostream>
#include "menu.h"
#include "basic_calculator.h" // header for basic calculator + - / *..
#include "basic_statistic.h"  // header for simple statistic mean, min, max.
#include "word_counter.h"     // header for a simple word counter.
#include "word_palidrom.h"    // header for a palidrom counter.


using namespace std;

int main(){
    
    //variables to use in the program
    int userOption=0;          // user menu input
    bool exitProgram = false;  // check to exit from the main program
    
    // loop in the main menu
    while (!exitProgram)
    {
       
        // display the mian menu with (1-5) options
        mainMenu();
        // get data from user
        cin >> userOption;

        switch (userOption)
        {
        
        // option-menu to use a basic calcultator
        case 1:
            displayMenu();  // call basic_calculator (displayMenu - calOption) and interact
            calOption();
            break;

        // option-menu to use basic statistic calculator            
        case 2:
            statMenu();   // call basic_statistic (statMenu - statOption) and interact
            statOption();
            break;
            
        // option-menu to use basic count words
        case 3:
            wordMenu();   // call word_counter (wordMenu - countOption) and interact
            countOption();
            break;
        
        // option-menu to validate if a word is a palidrom        
        case 4:
            palidMenu();  // call word_palidrom (palidMenu - palidOption) and interact
            palidOption();
            break;

        // option-menu to exit from the main program
        case 5:
            exitProgram=true;
            break;
        
        // if non-valid option then show the message.
        default:
            cout << "\n***** Please enter a valid input (1-5)! *****" << endl;
            break;
        }

    }
    
    // exit from the main menu.
    cout << "---- Thanks for using this Command line utility ----" << endl;    
    return 0;
}


