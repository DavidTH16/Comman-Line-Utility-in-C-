/*
This files describes the implementation of a basic calculator that
performs a elementary operations (+,-,*,/,pow,sqrt).
*/

#include <iostream>
#include <cmath>
#include "basic_calculator.h"

using namespace std;

// menu to select math operation
void displayMenu(){
    cout << "\n=== Basic calculator ===" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Substactiom" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Pow" << endl;
    cout << "6. Sqrt" << endl;
    cout << "7. Exit Basic calculator" << endl;
}

// option selection
void calOption(){
    int userInput;
    bool exitProgram =false;
    double num1, num2;

    // loop to interact with user's option 
    while (!exitProgram)
    {
        //Enter the user input
        cout << "Enter a valid option (1-7):";
        cin >> userInput;
        
        // validate the option is in the menu before save inputs
        if (userInput >=1  && userInput < 7){
            cout << "User option:" << userInput << endl;
            cout << "Enter first number:";
            cin >> num1;

            if (userInput !=6){
            cout << "Enter second number:";
            cin >> num2;
        }
        }

        // pass the numbers and execute the operation
        switch (userInput)
        {
        case 1:
            // perform addition
            cout << "Result:" << add(num1, num2) << endl;
            displayMenu();
            break;

        case 2:
            // perform differentation
            cout << "Result:" << rest(num1, num2) << endl;
            displayMenu();
            break;

        case 3:
            // perform multiplication
            cout << "Result:" << mul(num1, num2) << endl;
            displayMenu();
            break;

        case 4:
            // perform division and handle denominator zero (divison by zero)
            if (num2 == 0){
                cout << "--> Please enter a second number that is not zero" << endl;
                displayMenu();
                continue; 
            }
            cout << "Result:" << division(num1, num2) << endl;
            displayMenu();
            break;

        case 5:
            //perform power , cast exponent as integer values
            cout << "Result:" << power(num1, static_cast<int>(num2)) << endl; // handle posible decimal values
            displayMenu();
            break;

        case 6:
            // perform sqrt and handle negative numbers
            if (num1 < 0){
                cout << "--> Please enter a positive number";
                displayMenu();
                continue;
            }
            cout << "Result:" << squareRoot(num1) << endl; 
            displayMenu();
            break;
        case 7:
            cout << "Thanks for using basic calculator";
            exitProgram = true;
            break;
        
        default:
        cout << "--> Please enter a valid input (1-7)" << endl;  
        displayMenu();  
        break;
        }

    }
    
}




/*math functions to calculate simple operation using two digits
 including: sum, rest, mult, div, power, sqrt
*/

double add(double numOne, double numTwo){

    return numOne +numTwo;
}

double rest(double numOne, double numTwo){
    return numOne - numTwo;
}

double mul(double numOne, double numTwo){
    return numOne * numTwo;
}

double division(double numOne, double numTwo){
    /*
    TO proceed this operation must guarantee
    denominator is >0 
    */
    return numOne/numTwo;
}

double power(double base, int exponent){
    /*
    to proceed this operation check exponent is integer
    */
    return std::pow(base, exponent);
}

double squareRoot(double numOne){
    return std::sqrt(numOne);
}