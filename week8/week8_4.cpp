/*  4# Write a C++ program that reads a line of text and counts all occurrences of 
a particular word.*/

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string text, word, current;
    int count = 0;

    cout << "Enter a line of text: ";
    getline(cin, text);

    cout << "Enter the word to count: ";
    cin >> word;

    stringstream ss(text); // break text into words

    while (ss >> current) {
        if (current == word) {
            count++;
        }
    }

    cout << "The word \"" << word << "\" occurs " << count << " times." << endl;

    return 0;
}

