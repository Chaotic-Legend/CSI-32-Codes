// File: InputOutputWithStrings.cpp
// This program asks for your first and last name to greet you.

#include <iostream>
#include "std_lib_facilities.h"

int main()

{
    string firstName, lastName;
    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Enter your last name: ";
    cin >> lastName;

    cout << "Hello, ";
    cout << firstName << " ";
    cout << lastName << "! ";
    cout << "How are you?\n";

    return 0;
}