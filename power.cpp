//C++ Program To Calculate the Power of a Number using recursion

#include <iostream>
using namespace std;

int pow(int b,int p){
	if(b==0)
		return 0;
	if(p==0)
		return 1;
	return b*pow(b,p-1);
}

int main(){
	int p,b;
	cout <<  "enter base and power value " <<endl;
	cin>>b>>p;
	
	cout << b << " to the power " << p << " is equal to " << pow(b,p);
	
	return 0;
}
