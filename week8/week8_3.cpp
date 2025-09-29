/*Write a C++ program to find a string within a sentence and replace it with 
another string.*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence, wordToFind, wordToReplace;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    cout << "Enter the word to find: ";
    getline(cin, wordToFind);

    cout << "Enter the word to replace it with: ";
    getline(cin, wordToReplace);

    // Find position of the word
    size_t pos = sentence.find(wordToFind);

    if (pos != string::npos) {
        // Replace found word
        sentence.replace(pos, wordToFind.length(), wordToReplace);
        cout << "Updated sentence: " << sentence << endl;
    } else {
        cout << "Word not found in the sentence!" << endl;
    }

    return 0;
}

