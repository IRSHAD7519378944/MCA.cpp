//  week - 5        @mdirshad-25CAMSA158

/* 8. Write a C++ program to merge two sorted arrays into another array in sorted order. */

#include <iostream>

using namespace std;

int main() {
    int n1, n2;

    cout << "Enter size of first sorted array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter " << n1 << " sorted elements: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter size of second sorted array: ";
    cin >> n2;
    int arr2[n2];
    cout << "Enter " << n2 << " sorted elements: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    int merged[n1 + n2];
    int i = 0, j = 0, k = 0;

    // Merge two arrays
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // Copy remaining elements (if any)
    while (i < n1) {
        merged[k++] = arr1[i++];
    }
    while (j < n2) {
        merged[k++] = arr2[j++];
    }

    // Display merged array
    cout << "Merged sorted array: ";
    for (int x = 0; x < n1 + n2; x++) {
        cout << merged[x] << " ";
    }
    cout << endl;

    return 0;
}
/*  OUTPUT
Enter size of first sorted array: 6
Enter 6 sorted elements: 20 40 50 70 80 90
Enter size of second sorted array: 4
Enter 4 sorted elements: 10 30 60 100
Merged sorted array: 10 20 30 40 50 60 70 80 90 100
*/
