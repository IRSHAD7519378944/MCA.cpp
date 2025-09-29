//  week - 4        @mdirshad-25CAMSA158
/*  7# Write a C++ program to find the roots of a quadratic equation. */
#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int a,b,c,D;
	cout << "Enter coefficient of X^2, x, and constant term " <<endl;
	cin>>a>>b>>c;
	
	D = b*b - 4*a*c;
	
	if(D<0){
		cout << "Roots are Imaginary" <<endl;
	}else{
		if(D==0){
			cout << "Roots are Real and Equal i.e  " 
			<< -b/(2*a) << " , " << -b/(2*a);
		}else{
		  cout << "Roots are Real but not Equall i.e  " 
			<< (-b-sqrt(D))/(2*a) << " , " << (-b+sqrt(D))/(2*a);
		}
	}
		return 0;
}
/*	OUTPUT
Enter coefficient of X^2, x, and constant term
1 -9 18
Roots are Real but not Equall i.e  3 , 6			*/
