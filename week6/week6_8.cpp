//  week - 6        @mdirshad-25CAMSA158

/* 8# Write a program using a pointer variable to the sum of n elements from the array. */

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n], *p;
    cout << "Enter " << n << " elements: " <<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    p = arr;
    for (int i = 0; i < n; i++) {
        sum += *(p + i);
    }

    cout << "Sum = " << sum << endl;
    return 0;
}
/*	OUTPUT

Enter number of elements: 5
Enter 5 elements:
10 20 30 40 50
Sum = 150			*/
