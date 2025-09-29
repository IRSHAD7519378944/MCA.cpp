#include <iostream>
#include <string>
using namespace std;

int main() {
    string mainStr;
    int pos, n;

    cout << "Enter the main string: ";
    getline(cin, mainStr);

    cout << "Enter the position to delete from: ";
    cin >> pos;

    cout << "Enter the number of characters to delete: ";
    cin >> n;

    if (pos < 0 || pos >= mainStr.length()) {
        cout << "Invalid position!" << endl;
    } else {
        if (pos + n > mainStr.length()) {
            n = mainStr.length() - pos; // adjust if exceeding length
        }
        mainStr.erase(pos, n);
        cout << "String after deletion: " << mainStr << endl;
    }

    return 0;
}

