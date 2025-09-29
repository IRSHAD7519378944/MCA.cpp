//  week - 4        @mdirshad-25CAMSA158
/*  5# Write a C++ program to generate all the prime numbers between 1 and n, where n is a value 
	supplied by the user.*/	
	
#include <iostream>
using namespace std;

int main(){	
	int n;
	cout << "Enter value of n for range : ";
	cin>>n;	
	cout << "All Prime Numbers between 1 to " << n <<endl;
	// for range between 1 to n
	for(int r=1; r<n; r++){	
		// check prime or not
		int i;
		for(i=2; i<r; i++){
			if(r%i == 0)
				break;
		}		
		if(r == i)
		cout << r << " ";		
	}	 
	return 0;
}
/*	OUTPUT

Enter value of n for range : 30
All Prime Numbers between 1 to 30
2 3 5 7 11 13 17 19 23 29		
*/
