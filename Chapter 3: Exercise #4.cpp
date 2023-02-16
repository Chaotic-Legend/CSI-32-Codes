// File: Chapter 3: Exercise #4.cpp

#include <iostream>
using namespace std;  

int main()

{
    cout << "Enter the first integer value: ";
    double val1 {0};
    cin >> val1;

    cout << "\nEnter the second integer value: ";
    double val2 {0};
    cin >> val2;

    if (val1 < val2)
        cout << "\nThe smaller value is " << val1 << " and the larger value is " << val2 << ".\n";
    else if (val1 == val2)
        cout << "\nThe entered integer values are the same.\n";
    else
        cout << "\nThe smaller value is " << val2 << " and the larger value is " << val1 << ".\n";

    cout << "\n" << val1 << " + " << val2 << " = " << val1 + val2 << "\n";
    cout << "\n" << val1 << " - " << val2 << " = " << val1 - val2 << "\n";
    cout << "\n" << val1 << " * " << val2 << " = " << val1 * val2 << "\n";
    
    if (val2 == 0)
        cout << "\n" << val1 << " / " << val2 << " = " << "Undefined" << "\n";
    else
        cout << "\n" << val1 << " / " << val2 << " = " << val1 / val2 << "\n";

    return 0;
} 
