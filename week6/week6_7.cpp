//  week - 6        @mdirshad-25CAMSA158

/* 7#  Write a program for reading elements using a pointer into an array and display the
values using an array.
i. Declare a set of elements.
ii. Declare the pointer and initialize it to the first element's address of
a set of elements (array).
iii. Repeat the loop until the pointer reaches to the last element and
displays each element. */
#include <iostream>
using namespace std;

int main() {
    int arr[5], *p;
    cout << "Enter 5 elements: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    p = arr; // pointer to first element
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
       cout << *(p + i) << " ";
    }
    cout << endl;
    return 0;
}
/*	OUTPUT

Enter 5 elements: 5 4 8 7 6
Array elements: 5 4 8 7 6		*/
