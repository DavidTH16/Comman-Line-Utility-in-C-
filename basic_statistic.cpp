/*
This file describes the implementation for a basic statistic calculator.
it performs a basic operation (min, max, mean) with two 
given numbers by the user.
*/


#include <iostream>
#include <vector>
#include "basic_statistic.h"

using namespace std;

// function for main menu 
void statMenu(){
    cout << "\n=== Basic statistic calculator ===" << endl;
    cout << "1. Min value" << endl;
    cout << "2. Max value" << endl;
    cout << "3. Mean" << endl;
    cout << "4. Exit Basic statistic calculator" << endl;
}

//function to detect user's option
void statOption(){
    
    // variables: user option, control while, array_size
    int userOption = 0;
    int arraySize = 0;
    bool exitProgram = false;
    vector<double> array;
    

    while (!exitProgram )
    {
        
        //Enter the user input
        cout << "Enter a valid option (1-4):";
        cin >> userOption;

        // validate the option is in the menu before save inputs
        // if is valida then introduce values in array.
        if (userOption >= 1 && userOption < 4){
            cout << "Enter size of Array:";
            cin >> arraySize;

            if (arraySize <= 0){
                cout << "--> Array size must be a positive integer." << endl;
                continue;
            }

            array.resize(arraySize);

            // loop to enter values in array
            for (int i = 0; i < arraySize; i++){
                cout << "Enter element (" << i+1 << "/" << arraySize << "): ";
                cin >> array[i];
            }
        }
        else {
            array.clear();
        }


        //select option to perform in the array
        switch (userOption)
        {
        case 1:
            //get min value
            cout << "Result is: " << minFunction(array) << endl;
            statMenu();
            break;

        case 2:
            // get max value
            cout << "Result is: " << maxFunction(array) << endl;
            statMenu();
            break;

        case 3:
            // get average value
            cout << "Result is: " << avgFunction(array) << endl;
            statMenu();
            break;
        
        case 4:
            // exit program
            cout << "Thanks for using basic statistic calculator";
            exitProgram = true;
            break;
        
        default:
            cout << "--> Please enter a valid input (1-4)" << endl;  
            statMenu();
            break;
        }

    }
    
}

// function to determinates the min value in array
double minFunction(const vector<double>& array){
    // guard to check null array
    if (array.empty()){
        return 0.0;
    }

    double min = array[0];
    for (size_t i = 1; i < array.size(); i++){
        if (array[i] < min){
            min = array[i];
        }
    }
    return min;
}

// function to determinates the max value in array
double maxFunction(const vector<double>& array){
    // guard to check null array
    if (array.empty()){
        return 0.0;
    }

    double max = array[0];
    for (size_t i = 1; i < array.size(); i++){
        if (array[i] > max){
            max = array[i];
        }
    }
    return max;
}

//function to determinates the mean value in array
double avgFunction(const vector<double>& array){
    // guard to check null array
    if (array.empty()){
        return 0.0;
    }

    double sum = 0.0;
    for (double value : array){
        sum += value;
    }
    return sum / static_cast<double>(array.size());
}