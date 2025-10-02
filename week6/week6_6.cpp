//  week - 6        @mdirshad-25CAMSA158

/* 6#  Write a C++ program to concatenate two strings using pointers. */

#include <iostream>

using namespace std;

int main() {
    char str1[] = "Hello ";
    char str2[] = "World!";
    char *p = str1;
    char *q = str2;
    // move p to end of str1
    while (*p != '\0') {
        p++;
    }
    // copy str2 to str1
    while (*q != '\0') {
        *p = *q;
        p++;
        q++;
    }
    *p = '\0';

    cout << "Concatenated string: " << str1 << endl;

    return 0;
}
/*    OUTPUT

Concatenated string: Hello World!		*/
