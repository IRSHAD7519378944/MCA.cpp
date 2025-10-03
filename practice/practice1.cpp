#include <iostream>
using namespace std;

void printArray(int arr[],int size){
	if(size==-1)
		return;
	printArray(arr,size-1);
	cout << arr[size] << " ";	
}

int main(){
	int array[5] = {20,40,80,75,96};
	printArray(array,4);
}

/*   output

20 40 80 75 96

*/
