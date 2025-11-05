//  week - 8 @mdirshad-25CAMSA158
/*1# Write a C++ program that uses functions to perform the following operations: 
 i. To insert a substring into a given main string from a given position.*/
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
}/*   	OUTPUT
Enter the main string: how are you
Enter the substring to insert: we
Enter the position to insert: 8
String after insertion: how are weyou   */
