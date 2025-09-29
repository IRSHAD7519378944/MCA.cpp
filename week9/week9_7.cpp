/*7# Write a C++ program to find an array's maximum and minimum elements using recursion. */

#include <iostream>
using namespace std;

int findMax(int arr[], int size) {
	
   if(size == 1)
   	return arr[0];
   	// first element assinged in max
	int max = findMax(arr,size-1);
	if(max < arr[size-1]){
		max = arr[size-1];
	}
	return max;
}

int findMin(int arr[], int size) {
	
    if(size == 1)
   	return arr[0];
   	// first element assinged in max
	int min = findMin(arr,size-1);
	if(min > arr[size-1]){
		min = arr[size-1];
	}
	return min;
}

int main(){
	
	int arr[5] = {3,6,2,9,8};
	cout << "Minimum value is " << findMin(arr,5) <<endl;
	cout << "Maximum value is " << findMax(arr,5) <<endl;
	
	return 0;
}
