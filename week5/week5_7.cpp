//  week - 5        @mdirshad-25CAMSA158
/*  7# Write a C++ program to count and display positive, negative, odd, and even numbers in
    an array.*/
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of elements in array: ";
    cin >> n;
	int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int positive = 0, negative = 0, odd = 0, even = 0;
    cout << "\nPositive numbers: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            cout << arr[i] << " ";
            positive++;
        }
    }
    cout << "\nNegative numbers: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            cout << arr[i] << " ";
            negative++;
        }
    }
    cout << "\nEven numbers: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0){
            cout << arr[i] << " ";
            even++;
        }
    }
    cout << "\nOdd numbers: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0){
            cout << arr[i] << " ";
            odd++;
        }
    }
    cout << "\n\n--- Result ---\n";
    cout << "Positive count: " << positive << endl;
    cout << "Negative count: " << negative << endl;
    cout << "Even count: " << even << endl;
    cout << "Odd count: " << odd << endl;
    return 0;
}
/*		OUTPUT
Enter number of elements in array: 10
Enter 10 elements:
3 4 -5 -6 7 -10 12 -7 -15 20

Positive numbers: 3 4 7 12 20
Negative numbers: -5 -6 -10 -7 -15
Even numbers: 4 -6 -10 12 20
Odd numbers: 3 -5 7 -7 -15

--- Result ---
Positive count: 5
Negative count: 5
Even count: 5
Odd count: 5			*/
