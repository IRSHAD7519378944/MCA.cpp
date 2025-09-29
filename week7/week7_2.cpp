//  week - 7        @mdirshad-25CAMSA158

/* 2# Write a C++ Program for the Length of a String Using a Pointer. */

#include<iostream>

using namespace std;

int main(){
	char str[100];
	char *ptr = str;
	int len=0;
	
	cout << "enter a string " <<endl;
	cin.getline(str,100);
	while(*ptr !='\0'){
		len++;
		ptr++;
	}
	cout << "Length of string is " <<len;
	return 0;
}

/*	OUTPUT

enter a string
I love Aligarh Muslim University!
Length of string is 33

*/
