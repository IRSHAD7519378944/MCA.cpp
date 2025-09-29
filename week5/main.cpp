//  week - 5        @mdirshad-25CAMSA158
/*  9# Write a C++ program to find the frequency of a particular number in a list of integers */
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "How many number enter U want in array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int number, freq = 0;
    cout << "Enter the number whose frequency you want to find: ";
    cin >> number;
    for (int i = 0; i < n; i++) {
        if (arr[i] == number)
            freq++;
    }
    cout << "\nThe number " << number << " occurs " << freq << " times in the array.\n";
    return 0;
}

/*		OUTPUT
How many number enter U want in array: 10
Enter 10 elements:
4 2 4 5 4 4 7 4 8 4
Enter the number whose frequency you want to find: 4

The number 4 occurs 6 times in the array.  */
