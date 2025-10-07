#include <iostream>
using namespace std;

void swap(int a,int b){
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "After swapping value" <<endl;
	cout << "a = " << a << "  b = " << b <<endl;
}

void swapping(int *p,int *q){
	*p = *p + *q;
	*q = *p - *q;
	*p = *p - *q;
}

int main(){
	
	int a=10,b=20;
	
	cout << "a = " << a << "  b = " << b <<endl;
	swap(a,b);
	swapping(&a,&b);
	cout << "After swapping refrence" <<endl;
	cout << "a = " << a << "  b = " << b <<endl;
	
	return 0;
}
