#include <iostream>
using namespace std;

void transposeMatrices(int arr[10][10], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int r, c;
    cout << "Enter row and column: ";
    cin >> r >> c;
    int arr[r][c];  // Variable Length Array (VLA)
    cout << r << " x " << c << " Matrix:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }

    transposeMatrices(arr, 3, 3);

    return 0;
}

