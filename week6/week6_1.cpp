//  week - 6        @mdirshad-25CAMSA158

/* 1# Write a C++ Program to Add Two Numbers Using a Pointer. */

#include <iostream>

using namespace std;

int main() {
    int a, b, sum;
    int *p1, *p2;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    p1 = &a;
    p2 = &b;

    sum = *p1 + *p2;
    cout << "Sum = " << sum << endl;

    return 0;
}

/*  OUTPUT

Enter two numbers: 4 6
Sum = 10

*/
