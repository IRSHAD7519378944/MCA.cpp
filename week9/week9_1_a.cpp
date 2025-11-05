//	week - 8 @mdirshad-25CAMSA158
/*1# Write C programs that use both recursive and 
non-recursive functions to find: 
a) The factorial of a given integer. */
#include<iostream>
using namespace std;

int fact(int n){
	if(n==0 || n==1)
		return 1;
	return n*fact(n-1);
}
int factorial(int n){
	int f=1;
	for(int i=n; i>=1; i--){
		f = f*i;
	}
	return f;
}
int main(){
	cout << fact(4) <<endl;
	cout << factorial(6) <<endl;
	return 0;
}
/* output 
24
720
*/
