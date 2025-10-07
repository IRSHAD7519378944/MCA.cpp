#include <iostream>
using namespace std;

const int MAX = 100;

// Function to print transpose of matrix a with size r×c
void printTranspose(int arr[][MAX], int r, int c) {
    for (int j = 0; j < c; j++) {
        for (int i = 0; i < r; i++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    int r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;

    int arr[MAX][MAX];
    cout << "Enter "<< r << " x " << c << " Matrices" <<endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Transpose:\n";
    printTranspose(arr, r, c);

    return 0;
}

