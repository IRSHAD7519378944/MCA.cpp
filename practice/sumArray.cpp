#include <iostream>
using namespace std;

int sumArray(int arr[],int size){
	if(size==0)
		return 0;
	return arr[size-1]+sumArray(arr,size-1);
}

int main(){
	
	int arr[5] = {10,20,30,40,50};
	
	cout << "sum is " << sumArray(arr,5);
	
	return 0;
}
