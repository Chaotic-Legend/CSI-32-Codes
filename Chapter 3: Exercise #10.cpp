// File: Chapter 3: Exercise #10.cpp

#include <iostream>
#include "std_lib_facilities.h"

int main()

{
    cout << "Press Ctrl + D on the keyboard when you are done.\n";
    cout << "\nWrite an operation (+ or plus, - or minus, * or mul, / or div) followed by two integer values: ";
    
    string operation {" "};
    double operand1 {0};
    double operand2 {0};

    while (cin >> operation >> operand1 >> operand2) {
        if ((operation == "/" or operation == "div") and operand2 == 0)
            cout << "\n" << operand1 << " / " << operand2 << " = " << "Undefined" << "\n";
        else if (operation == "+" or operation == "plus")
            cout << "\n" << operand1 << " + " << operand2 << " = " << operand1 + operand2 << "\n";
        else if (operation == "-" or operation == "minus")
            cout << "\n" << operand1 << " - " << operand2 << " = " << operand1 - operand2 << "\n";
        else if (operation == "*" or operation == "mul")
            cout << "\n" << operand1 << " * " << operand2 << " = " << operand1 * operand2 << "\n";
        else if (operation == "/" or operation == "div")
            cout << "\n" << operand1 << " / " << operand2 << " = " << operand1 / operand2 << "\n";
        else
            cout << "\nError: The input " << operation << " couldn't be processed.\n";

        cout << "\nWrite an operation (+ or plus, - or minus, * or mul, / or div) followed by two integer values: ";
    }

    return 0;
}