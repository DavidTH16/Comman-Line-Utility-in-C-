/*
dependency for a basic calculator one digit
*/

#ifndef BASIC_CALCULATOR_H
#define BASIC_CALCULATOR_H

//functions declarations for basic calculator
void calOption();
void displayMenu();
double add(double numOne, double numTwo);
double rest(double numOne, double numTwo);
double mul(double numOne, double numTwo);
double division(double numOne, double numTwo);
double power(double base, int exponent);
double squareRoot(double numOne);
#endif