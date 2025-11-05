//	// week - 9 @mdirshad-25CAMSA158
/*4# Write a C++ program to swap two numbers by both call by value and call 
by reference mechanisms, using two functions swap_value() and 
swap_reference respectively, by getting the choice from the user and executing 
the user's choice using switch-case. */
#include <iostream>
using namespace std;
void swap_value(int a, int b){
	a = a+b;
	b = a-b;
	a = a-b;	
	cout << "\nAfter swap \n a = " << a 
	<< " and "<< "b = " << b; 
}
swap_reference(int *p,int *q){
	*p = *p + *q;
	*q = *p - *q;
	*p = *p - *q;
}
int menue(){
	int choice;
	cout << "\n\nSwapping of two numbers " <<endl;
	cout << "1. Using call by value " <<endl;
	cout << "2. Using call by refrence " <<endl;
	cout << "3. For Exit" <<endl;
	cout << "\n\nEnter your choice ";
	cin>>choice;
	return choice;
}
int main(){
	int a,b;
	while(1){
	switch(menue()){
		case 1:	cout << "enter 2 number " ;
				cin>>a>>b;
				swap_value(a,b);
			break;
		case 2: cout << "enter 2 number " ;
				cin>>a>>b; 
				swap_reference(&a,&b);
				cout << "\nAfter swap \n a = " << a 
				<< " and "<< "b = " << b; 
			break;
		case 3: exit(0);
			default: cout << "Invalid choice ";
	}
}
}/*  output
Swapping of two numbers
1. Using call by value
2. Using call by refrence
3. For Exit
Enter your choice 2
enter 2 number 16 58
After swap
 a = 58 and b = 16
