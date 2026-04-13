/*
declaration for basi statistic calulator
*/

#ifndef BASIC_STATISTIC_H
#define BASIC_STATISTIC_H

#include <vector>

void statMenu();
void statOption();
double minFunction(const std::vector<double>& array);
double maxFunction(const std::vector<double>& array);
double avgFunction(const std::vector<double>& array);
#endif