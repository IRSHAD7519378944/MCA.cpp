//  week - 6        @mdirshad-25CAMSA158

/* 2# Write a C++ Example Program for swapping numbers Using Pointers. */

#include <iostream>
using namespace std;

int main() {
    int a, b, temp;
    int *p1, *p2;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    p1 = &a;
    p2 = &b;
    
	cout << "Before swapping : a = " << a << ", b = " << b <<endl;
	
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    cout << "After swapping : a = " << a << ", b = " << b << endl;

    return 0;
}
/*		OUTPUT

Enter two numbers: 200 300
Before swapping : a = 200, b = 300
After swapping : a = 300, b = 200				*/
