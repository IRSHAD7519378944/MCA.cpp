// week - 9 @mdirshad-25CAMSA158
/*7# Write a C++ program to find an array's maximum and minimum elements using recursion. */
#include <iostream>
using namespace std;
int findMax(int arr[], int size) {	
   if(size == 1)
   	return arr[0];
	int max = findMax(arr,size-1);
	if(max < arr[size-1])
		max = arr[size-1];
	return max;
}
int findMin(int arr[], int size) {	
    if(size == 1)
   	return arr[0];
	int min = findMin(arr,size-1);
	if(min > arr[size-1])
		min = arr[size-1];
	return min;
}
int main(){	
	int arr[5] = {3,6,2,9,8};
	cout << "\nMinimum value is "<<findMin(arr,5);
	cout << "\nMaximum value is "<<findMax(arr,5);
	return 0;
}/*  output
Minimum value is 2
Maximum value is 9      */
