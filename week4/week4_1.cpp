//  week - 4        @mdirshad-25CAMSA158

/*	1# Write a C++ program to check whether a number is even or odd using ternary operator. */

#include <iostream>

using namespace std;

int main(){
	
	int num;
	
	cout << "Enter a Number : " ;
	cin>>num;
	
	(num%2 == 0)? cout << num << " is an Even Number" : 
	
	 cout << num << " is an Odd Number";
	
	return 0;
}

/*	OUTPUT

Enter a Number : 16
16 is an Even Number

Enter a Number : 25
25 is an Odd Number

*/
