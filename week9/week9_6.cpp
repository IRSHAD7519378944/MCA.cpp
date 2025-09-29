/*6# Write a C++ program to find the sum of elements of an array using recursion.*/
#include <iostream>
using namespace std;

int sumArray(int arr[], int size){
	if(size == 0){
		return 0;
	}
	return arr[size-1] + sumArray(arr,size-1);
}

int main(){
	
	int arr[3] = {10,20,30};
	
	cout << "sum of elements " << sumArray(arr,3);
	return 0;
}
