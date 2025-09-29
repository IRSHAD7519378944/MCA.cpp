//  week - 6        @mdirshad-25CAMSA158

/* 10# Write a C++ program to reverse a string using pointers.*/

# include<iostream>

using namespace std;

int main(){
	char str[] = "irshad";
	char *start =str;
	char *end = str;
	
	while(*end != '\0'){
		end++;
	}
	end--;
	
	while(start < end){
		char temp = *start;
		*start = *end;
		*end = temp;
		
		start++;
		end--;
	}
	cout << str;
	return 0;
}
/*	OUTPUT
dahsri		*/
