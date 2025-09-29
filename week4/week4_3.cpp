//  week - 4        @mdirshad-25CAMSA158

/*  3# Write a C++ program to evaluate the arithmetic expression ((a + b / c * d - e) 
* (f - g)). Read the values a, b, c, d, e, f, g from the standard input device. */

#include <iostream>

using namespace std;

int main(){
	
	float a,b,c,d,e,f,g,result;
	
	cout << "Enter value of a, b, c, d, e, f, g " <<endl;
	
	cin>>a>>b>>c>>d>>e>>f>>g;
	
	result = ((a + b / c * d - e) * (f - g));
	
	cout << "Result : " << result <<endl;
	
	return 0;
}

/*	OUTPUT

Enter value of a, b, c, d, e, f, g
40 60 50 100 100 158 157
Result : 60
 
 */
