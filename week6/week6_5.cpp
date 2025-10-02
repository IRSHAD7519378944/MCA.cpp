//  week - 6        @mdirshad-25CAMSA158

/* 5#  Write a C++ Program to Print a String Using a Pointer.  */

#include <iostream>

using namespace std;

int main() {
    char str[] = "Hello irshad";
    char *p = str;

    while (*p != '\0') {
       cout << *p;
        p++;
    }
    
    return 0;
}

/*	OUTPUT

Hello irshad

*/
