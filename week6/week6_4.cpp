//  week - 6        @mdirshad-25CAMSA158

/* 4#  Write a C++ Program for Increment and Decrement an Integer Using a Pointer.*/

#include <iostream>

using namespace std;

int main() {
    int x = 5;
    int *p = &x;

    cout << "Original value: " << *p << endl;   // 5

    (*p)++;
    cout << "After increment: " << *p << endl;  // 6

    (*p)--;
    cout << "After decrement: " << *p << endl;  // 5

    return 0;
}

/*	OUTPUT

Original value: 5
After increment: 6
After decrement: 5

*/
