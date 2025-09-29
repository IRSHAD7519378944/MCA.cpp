//  week - 5        @mdirshad-25CAMSA158

/*6# Write a C++ program to perform the following: 
b. Multiplication of two matrices   */

#include <iostream>

using namespace std;

int main(){
	
	int arr[2][3],brr[3][2],result[2][2];
	cout << "enter first 2 x 3 matrices "<<endl;
	for(int i=0; i<2; i++){
		for(int j=0; j<3; j++){
			cin>>arr[i][j];
		}
	}
	cout << "enter second 3 x 2 matrices "<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<2; j++){
			cin>>brr[i][j];
		}
	}
	
	
	int sum = 0;
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			for(int k=0; k<3; k++){
				sum = sum + arr[i][k]*brr[k][j];
			}
			result[i][j] = sum;
			sum = 0;
		}
	}
	
	cout << "\nAfter Multiplication\n" <<endl;
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout << result[i][j] << " ";
		}
		cout <<endl;
	}
	
	return 0;
}

/*    OUTPUT

enter first 2 x 3 matrices
1 2 3
4 5 6
enter second 3 x 2 matrices
1 2
3 4
5 6

After Multiplication

22 28
49 64
*/
