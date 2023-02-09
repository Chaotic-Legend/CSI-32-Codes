// File: Chapter 3: Exercise #6.cpp

#include <iostream>
#include "std_lib_facilities.h"

int main()

{
    cout << "Enter the first integer value: ";
    double val1 {0};
    cin >> val1;

    cout << "\nEnter the second integer value: ";
    double val2 {0};
    cin >> val2;

    cout << "\nEnter the third integer value: ";
    double val3 {0};
    cin >> val3;

    double min {0};
    double mid {0};
    double max {0};

    if (val1 < val2)
        if (val1 < val3) {
            min = val1;
            if (val2 < val3) {
                mid = val2;
                max = val3;
            } 
            else {
                mid = val3;
                max = val2;
            }
        }
        else {
            min = val3; 
            mid = val1;
            max = val2;
        }
    else 
        if (val2 < val3) {
            min = val2;
            if (val1 < val3) {
                mid = val1;
                max = val3;
            } 
            else {
                mid = val3;
                max = val1;
            }
        }
        else {
            min = val3; 
            mid = val2;
            max = val1;
        }

    cout << "\nThe entered integer values in a numerical sequence are " << min << ", " << mid << ", and " << max << ".\n";

    return 0;
}