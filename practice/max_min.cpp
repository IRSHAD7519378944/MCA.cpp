#include <iostream>
using namespace std;

int min_value(int arr[],int size){
	if(size==1)
		return arr[size];
	int min = min_value(arr,size-1);
	if(min > arr[size-1]){
		min = size-1;
	}
	return min;
}

int max_value(int arr[],int size){
	
}

int main(){
	
	int arr[5] = {4,2,5,6,8};
	int min = min_value(arr,5);
	cout << "Minimum is " << min <<endl;
	return 0;
}
