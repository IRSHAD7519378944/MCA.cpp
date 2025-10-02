//  week - 5        @mdirshad-25CAMSA158
/* 4# Write a C++ program to find the second-largest integer in a list of integers. */

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n < 2) {
        cout << "At least 2 numbers required!" << endl;
        return 0;
    }

    int arr[n];
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest, secondLargest;

    // Initialize with first two elements
    if (arr[0] > arr[1]) {
        largest = arr[0];
        secondLargest = arr[1];
    } else {
        largest = arr[1];
        secondLargest = arr[0];
    }


    // Check remaining elements
    for (int i = 2; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (largest == secondLargest) {
        cout << "Second largest does not exist!" << endl;
    } else {
        cout << "Second largest number is: " << secondLargest << endl;
    }
    return 0;
}

/*   OUTPUT
Enter the number of elements: 1
At least 2 numbers required!  

Enter the number of elements: 5
Enter 5 integers: 8 8 8 8 8
Second largest does not exist!

Enter the number of elements: 5
Enter 5 integers: 12 45 25 76 30
Second largest number is: 45			*/
