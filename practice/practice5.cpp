#include <iostream>
using namespace std;

void displayArray(int arr[],int size){
	if(size == -1)
		return;
	displayArray(arr,size-1);
	cout << arr[size] << " ";
}


int main(){
	int arr[5] = {3,6,4,7,1};
	displayArray(arr,4);
	return 0;
}
