#include <iostream>
 using namespace std;
 int main() {
    int number;   
    cout << "Enter a number: ";
    while (!(cin >> number)) {
        cout << "Invalid input! Try again: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }
    cout << "You entered: " << number << endl;
    return 0;
 }

