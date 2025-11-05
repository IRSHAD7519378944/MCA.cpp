// week - 9 @mdirshad-25CAMSA158
/*  2# Write C programs that use recursive and 
non-recursive functions to solve 
towers of Hanoi problem.  */

#include <iostream>
using namespace std;

int i=1;

void TOH(int n, char A, char B, char C) {
	
    if (n > 0) {
        TOH(n - 1, A, C, B);
        cout << "step-"<< i++ << ": Move a Disc from " 
		<< A << " to " << C << endl << endl;
        TOH(n - 1, B, A, C);
    }
}

int main() {
    int n;
    cout << "Enter number of disks: ";
    cin >> n;

    TOH(n, 'A', 'B', 'C');
    return 0;
}


/* output 

Enter number of disks: 3

step-1: Move a Disc from A to C

step-2: Move a Disc from A to B

step-3: Move a Disc from C to B

step-4: Move a Disc from A to C

step-5: Move a Disc from B to A

step-6: Move a Disc from B to C

step-7: Move a Disc from A to C

*/
