// File: The Fibonacci Sequence.cpp

#include <iostream>
using namespace std;

int fib(int n) {
    int t1 = 1, t2 = 1, nextTerm = 0;

    if (n <= -1) {
        cout << "[Error: Negative Number Inputed]";
        return 0;
    }
    else if (n == 0) {
        cout << "0";
        return 0;
    }
    else {
        for (int i = 1; i <= n; ++i) {

            if (i == 1) {
                cout << t1 << " ";
                continue;
            }
            if (i == 2) {
                cout << t2 << " ";
                continue;
            }
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
            cout << nextTerm << " ";
        }
    return 0;
    }
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "\nThe Fibonacci Sequence: ";
    printf("\n", fib(n));
    getchar();
    return 0;
}