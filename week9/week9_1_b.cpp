// week - 9 @mdirshad-25CAMSA158
/*1# Write C programs that use both recursive and non-recursive functions to find: 
b) To find the greatest common divisor of two given integers.*/
#include <iostream>
using namespace std;
// using recursion
int GCD(int m,int n){
	if(n==0)
		return m;
	GCD(n,m%n);
}
// using loop
int gcd(int a,int b){
	int i;
	for(i=a<b?a:b; i>=1; i--){
		if(a%i==0 && b%i==0){
			break;
		}
	}
	return i;
}
int main(){	
	cout <<gcd(12,15)<<" "<<GCD(4,6)<<endl;
	return 0;
}
/* output
3
2	*/
