//  week - 5        @mdirshad-25CAMSA158

/* 6# Write a C++ program to perform the following: 
a. Addition of two matrices */

#include <iostream>

using namespace std;

int main(){
	
	int arr[3][3],brr[3][3],result[3][3];
	
	cout << "enter first 3 x 3 matrices "<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cin>>arr[i][j];
		}
	}
	cout << "enter second 3 x 3 matrices "<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cin>>brr[i][j];
		}
	}
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			result[i][j] = arr[i][j] + brr[i][j];
		}
	}
	
	cout << "\nAfter Sum " <<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout << result[i][j] << " ";
		}
		cout <<endl;
	}
}

/*  OUTPUT   
enter first 3 x 3 matrices
1 2 3
4 5 6
7 8 9
enter second 3 x 3 matrices
4 5 6
7 8 9
3 2 1

After Sum
5  7  9
11 13 15
10 10 10

*/
