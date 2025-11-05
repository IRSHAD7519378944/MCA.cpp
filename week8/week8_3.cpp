//    week - 8 @mdirshad-25CAMSA158
/* 3# Write a C++ program to find a string within a sentence 
    and replace it with another string.*/
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
    size_t pos = sentence.find(wordToFind);
    if (pos != string::npos) {
        sentence.replace(pos, wordToFind.length(), wordToReplace);
        cout << "Updated sentence: " << sentence;
    } else {
        cout << "\nWord not found in the sentence!";
    }
    return 0;
}/*   output
Enter a sentence: Abcd
Enter the word to find: c
Enter the word to replace it with: i
Updated sentence: Abid    */
