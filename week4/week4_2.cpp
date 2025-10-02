//  week - 4        @mdirshad-25CAMSA158

/* 2# Write a C++ program to perform the addition of two numbers without using + operator. */

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    while (b != 0) {
        int carry = a & b;   // common set bits → carry
        a = a ^ b;           // bina carry ka sum
        b = carry << 1;      // carry ko left shift karke add karna hai
    }

    cout << "Sum = " << a << endl;

    return 0;
}

/*	OUTPUT

Enter two numbers: 586 200
Sum = 786

*/
