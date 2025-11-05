//  week - 8 @mdirshad-25CAMSA158
/* 1# ii. To delete n characters from a given position in a given string*/
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
    cout << "How many char U want to delete: ";
    cin >> n;
    if (pos < 0 || pos >= mainStr.length()) {
        cout << "Invalid position!" << endl;
    } else {
        if (pos + n > mainStr.length()) {
            n = mainStr.length() - pos; 
        }
        mainStr.erase(pos, n);
    cout << "after deletion: " << mainStr;
    }
    return 0;
}/* output  
Enter the main string: irshad
Enter the position to delete from: 3
How many char U want to delete: 1
after deletion: irsad    */
