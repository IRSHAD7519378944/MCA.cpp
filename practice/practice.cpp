#include<iostream>
using namespace std;


 int min_value(int arr[],int size){
 	if(size==1){
 		return arr[0];
	 }
	 int min = min_value(arr,size-1);
	 if(min > arr[size-1]){
	 	min = arr[size-1];
	 }
	 return min;
 }
int max_value(int arr[],int size){
	if(size==1)
		return arr[0];
	int max = max_value(arr,size-1);
	if(max < arr[size-1]){
		max = arr[size-1];
	}
	return max;
}

void displayArray(int arr[],int size){
	if(size == -1){
		return;
	}
	displayArray(arr,size-1);
	cout << arr[size] << " ";
}

int sumArray(int arr[],int size){
	if(size==0){
		return 0;
	}
	return arr[size-1]+sumArray(arr,size-1);
}

int hcf(int m,int n){
	if(n==0)
		return m;
	return hcf(n,m%n);
}

void TOH(int n,char a, char b,char c){
	if(n>0){
		TOH(n-1,a,c,b);
		cout << "move a stone from " << a << " to " << c <<endl;
		TOH(n-1,b,a,c);
	}
}

int main(){
	
	//cout << hcf(16,12);
	
	//TOH(3,'A','B','C');
	
	int arr[5] = {20,15,70,93,19};
//	displayArray(arr,5-1);
//	cout << sumArray(arr,5);
	cout << "Maximum is " << max_value(arr,5) <<endl;
	cout << "Minimum is " << min_value(arr,5) <<endl;
	return 0;
}
