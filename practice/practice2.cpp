#include <iostream>

using namespace std;

int sumArray(int arr[],int size){
	if(size==0)
		return 0;
	return arr[size-1]+sumArray(arr,size-1);
}

int main(){
	
	int arr[5] = {1,2,3,4,5};
	cout << sumArray(arr,5);
	return 0;
}
