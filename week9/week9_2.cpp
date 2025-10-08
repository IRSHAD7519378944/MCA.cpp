/*  2# Write C programs that use recursive and non-recursive functions to solve 
towers of Hanoi problem.  */

#include <iostream>
using namespace std;

int i=1;

void TOH(int n, char A, char B, char C) {
	
    if (n > 0) {
        TOH(n - 1, A, C, B);
        cout << "step-"<< i++ << ": Move a Disc from " << A << " to " << C << endl << endl;
        TOH(n - 1, B, A, C);
    }
}

int main() {
    int n;
    cout << "Enter number of disks: " << endl;
    cin >> n;

    TOH(n, 'A', 'B', 'C');
    return 0;
}

