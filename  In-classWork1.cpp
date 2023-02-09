// File: In-classWork1.cpp
// Textbook: 3.5.1 An example: detect repeated words + 3.6.1 An example: find repeated words

#include <iostream>
#include "std_lib_facilities.h"

int main()

{
	int number_of_words = 0;
    string previous = " "; // previous word; initialized to "not a word"
    string current; // current word

    cout << "Press Ctrl + D on the keyboard when you are done.\n";
	cout << "\nEnter a sentence with repeated words: ";
    while (cin >> current) { // read a stream of words
		++number_of_words; // increase word count
        if (previous == current) // check if the word is the same as last
			cout << "\nWord Number: " << number_of_words << "\nRepeated Word Detected: " << current << "\n";
        
		previous = current;
    }

	return 0;
}