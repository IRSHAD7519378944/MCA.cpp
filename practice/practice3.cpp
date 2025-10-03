#include <iostream>

using namespace std;

int find_min(int arr[],int size){
	if(size==1)
		return arr[0];
	int min = find_min(arr,size-1);
	if(min > arr[size-1]){
		min = arr[size-1];
	}
	return min;
}

int find_max(int arr[],int size){
	if(size==1)
		return arr[0];
	int max = find_max(arr,size-1);
	if(max < arr[size-1])
		max = arr[size-1];
		
		return max;
}

int main(){
	
	int arr[5] = {4,7,2,8,3};
	
	cout << "Minimum is " << find_min(arr,5) <<endl;
	cout << "Maximum is " << find_max(arr,5) <<endl;
	
	return 0;
}

/*	output

Minimum is 2
Maximum is 8

*/
