//   week - 5       @mdirshad-25CAMSA158

/* 3# Write a C++ program to find the length of the array. */

#include <iostream>

using namespace std;

int main()
{
    
    int arr[8] = {4,3,6,2,8,1,4,3};

    // find length
    int count=0;
    
    for(int i=0; i<8; i++){
        count++;
    }

    cout << "\nLength of array is " << count;

    return 0;
}

/*  OUTPUT

Length of array is 8

*/
