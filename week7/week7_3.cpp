//  week - 7        @mdirshad-25CAMSA158

/* 3# Write a C++ program using pointers to compute the sum, mean, and standard deviation 
of all elements stored in an array of n real numbers. */

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n;
	cout << "How many number enter U want ";
	cin>>n;
	
	float arr[n];
	float *ptr=arr;
	cout << "enter " << n << " numbers" <<endl;
	for(int i=0; i<n; i++){
		cin>>*(ptr+i);
	}
	
	float sum=0,mean,sd=0;
	
	for(int i=0; i<n; i++){
		sum = sum + *ptr++;
	}
	
	cout << "Sum of all numbers is " << sum <<endl;
	
	mean = sum/n;
	
	cout << "Mean of Numbers is " << mean <<endl;
	
	for(int i=0; i<n; i++){
		sd = sd + pow(*(ptr+i)-mean, 2);
	}
	
	cout << "Standard Deviation is " << sqrt(sd/n) <<endl;
	
	return 0;
	
}

/*	OUTPUT

How many number enter U want 5
enter 5 numbers
10 20 30 40 50
Sum of all numbers is 150
Mean of Numbers is 30
Standard Deviation is 30

*/
