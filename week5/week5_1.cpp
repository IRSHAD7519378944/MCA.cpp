//	 week - 5		@mdirshad-25CAMSA158
/* 1# Write a C++ program to enter elements in the array and display the array elements. */

#include <iostream>

using namespace std;

int main()
{
	int n;
    cout << "How many number U want to enter " << endl;
    cin>>n;
    int arr[n]; 
	cout << "Enter " << n << " numbers" <<endl;
	 // input data
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // display data
    cout << "\nYou are enter these numbers : " <<endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

/*   OUTPUT
How many number U want to enter
5
Enter 5 numbers
5 4 7 2 8
You are enter these numbers :
5 4 7 2 8			*/
