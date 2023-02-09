// File: InputOutputWithStrings.cpp
// This program asks for your first and last name to greet you.

#include <iostream>
#include "std_lib_facilities.h"

int main()

{
    string firstName, lastName;
    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "\nEnter your last name: ";
    cin >> lastName;

    cout << "\nHello, " << firstName << " " << lastName << "! " << "How are you doing today?\n";

    return 0;
}
