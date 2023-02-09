// File: Chapter 4: Exercise #5.cpp

#include <iostream>
#include "std_lib_facilities.h"

int main()

{
    cout << "This program is a simple calculator. Press Ctrl + D on the keyboard when you are done.\n";
    cout << "\nWrite two integer values and an operation. (+, -, *, /): ";

    double operand1 {0};
    double operand2 {0};
    char operation {' '};

    while (cin >> operand1 >> operand2 >> operation) {
        switch (operation) {
            case '+':
                cout << "\nThe sum of " << operand1 << " and " << operand2 << " is " << operand1 + operand2 << ".\n";
                break;;
            case '-':
                cout << "\nThe difference of " << operand1 << " and " << operand2 << " is " << operand1 - operand2 << ".\n";
                break;;
            case '*':
                cout << "\nThe product of " << operand1 << " and " << operand2 << " is " << operand1 * operand2 << ".\n";
                break;;
            case '/':
                if (operand2 == 0)
                    cout << "\nThe division of " << operand1 << " and " << operand2 << " is undefined.\n";
                else
                    cout << "\nThe division of " << operand1 << " and " << operand2 << " is " << operand1 / operand2 << ".\n";
                break;;
            default:
                cout << "\nError: The input " << operation << " couldn't be processed.\n";
                break;;
        }  
	    cout << "\nWrite two integer values and an operation. (+, -, *, /): ";
    }

    return 0;
}