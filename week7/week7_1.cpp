//  week - 7        @mdirshad-25CAMSA158
/* 1# Write a C++ Program to Count vowels in a String Using a Pointer */

#include<iostream>
using namespace std;

int main(){
	
	char str[100];
	cout << "enter a string " <<endl;
	cin.getline(str,100);
	
	char *ptr = str;
	int c=0;
	 
	while(*ptr != '\0'){
		*ptr = tolower(*ptr);
		if(*ptr=='a' || *ptr=='e' || *ptr=='i' || *ptr=='o' || *ptr=='u'){
			c++;
		}
		ptr++;
	}
	
	cout << c << " vowel persent in " << str;
	
	return 0;
}
/*	OUTPUT

enter a string
Irshad Ahmad
4 vowel persent in irshad ahmad			*/
