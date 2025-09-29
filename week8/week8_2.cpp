/*  Write a C++ program to determine whether the given string is a palindrome. */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int start = 0;
    int end = str.length() - 1;
    bool isPalindrome = true;

    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome)
        cout << str << " -> is a palindrome string." << endl;
    else
        cout << str << " -> is not a palindrome string." << endl;

    return 0;
}

