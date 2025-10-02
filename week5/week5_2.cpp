//	week - 5		@mdirshad-25CAMSA158
/* 2# Write a C++ program to find the sum of all the array elements. */

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "How many number U want to enter " << endl;
    cin>>n;
    int arr[n];
    
	cout << "Enter " << n << " numbers" <<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int sum=0;
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }
    cout << "Sum of all elements : " << sum;
	return 0;
}
/*  OUTPUT 
How many number U want to enter
10
Enter 10 numbers
1 2 3 4 5 6 7 8 9 10
Sum of all elements : 55   */
