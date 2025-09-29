#include <iostream>
#include <string>
using namespace std;

int main() {
    string mainStr, subStr;
    int pos;

    cout << "Enter the main string: ";
    getline(cin, mainStr);

    cout << "Enter the substring to insert: ";
    getline(cin, subStr);

    cout << "Enter the position to insert: ";
    cin >> pos;

    if (pos < 0 || pos > mainStr.length()) {
        cout << "Invalid position!" << endl;
    } else {
        mainStr.insert(pos, subStr);
        cout << "String after insertion: " << mainStr << endl;
    }

    return 0;
}

