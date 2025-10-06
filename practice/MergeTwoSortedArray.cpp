#include <iostream>

using namespace std;

int main(){
	
	int arr[5] = {4,6,8,9,12};
	int brr[4] = {2,5,14,20};
	int merge[9];
	
	int i=0,j=0,k=0;
	
	while(i<5 && j<4){
		if(arr[i]<brr[j]){
			merge[k++] = arr[i++];
		}else{
			merge[k++] = brr[j++];
		}
	}
	
	while(i<5){
		merge[k++] = arr[i++];
	}
	
	while(j<4){
		merge[k++] = brr[j++];
	}
	
	for(int i=0; i<9; i++){
		cout << merge[i] << " ";
	}
	
		return 0;
}
