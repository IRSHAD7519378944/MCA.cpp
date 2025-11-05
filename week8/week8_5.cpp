//   week - 8 @mdirshad-25CAMSA158
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
        cout <<"The substring begins at index: "<< pos;
    } else {
        cout << "1" << endl; 
    }
    return 0;
}/* output  
Enter the main string (S): my name is irshad
Enter the substring (T): irshad
The substring begins at index: 11		*/
