// week - 9 @mdirshad-25CAMSA158
/*5# Write a C++ program to display all array elements using recursion.*/
#include<iostream>
using namespace std;

void printArray(int arr[],int size){
	if(size == -1){
		return;
	}
	printArray(arr,size-1);
	cout << arr[size] << " ";
}

int main(){
	int arr[5]={10,20,30,40,50};
	printArray(arr,5-1);
}


/* output 

10 20 30 40 50

*/
