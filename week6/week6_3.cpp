//  week - 6        @mdirshad-25CAMSA158

/* 3# Write a C++ Program to print the address of the Variable Using a Pointer. */

#include <iostream>

using namespace std;

int main() {
    int x = 10;
    int *p = &x;

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << p << endl;

    return 0;
}

/*		OUTPUT

Value of x: 10
Address of x: 0x70fe34

*/
