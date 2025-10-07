#include <iostream>
using namespace std;

int fact(int n){
	if(n==0)
		return 1;
	return n*fact(n-1);
}

int FACT(int n){
	int fact=1;
	for(int i=n; i>=1; i--){
		fact *= i;
	}
	return fact;
}

int main(){
	cout << FACT(5) <<endl;
	cout << fact(6) <<endl;
	return 0;
}
