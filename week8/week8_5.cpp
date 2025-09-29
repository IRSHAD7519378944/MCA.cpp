/*  5#  Write a C++ program that displays the position or index in the string S where 
the string T begins, or 1 if S doesn't contain T.*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string S, T;

    cout << "Enter the main string (S): ";
    getline(cin, S);

    cout << "Enter the substring (T): ";
    getline(cin, T);

    size_t pos = S.find(T);

    if (pos != string::npos) {
        cout << "The substring begins at index: " << pos << endl;
    } else {
        cout << "1" << endl;  // as per requirement
    }

    return 0;
}

