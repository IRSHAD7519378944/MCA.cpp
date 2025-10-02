//  week - 6        @mdirshad-25CAMSA158

/* 9# Write a program for reading elements using a pointer into the array and display the
values using an array. */

#include <iostream>
using namespace std;

int main() {
    int arr[5], *p;
    cout << "Enter 5 elements: "<<endl;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    p = arr;

    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << *(p + i) << " ";
    }
    cout << endl;

    return 0;
}

/*    OUTPUT

Enter 5 elements:
8 4 6 7 5
Array elements: 8 4 6 7 5
*/
