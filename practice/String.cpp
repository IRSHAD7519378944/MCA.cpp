#include<iostream>
#include<string>
using namespace std;



int main(){
	
	char str[20] = "how are you irshad?";
	char *p = str;
	
	int count=0;
	while(*p!='\0'){
		if(*p=='a' || *p=='i' || *p=='e' || *p=='o' || *p=='u' || *p=='A' || *p=='E' || *p=='I' || *p=='O' || *p=='U'){
			count++;
		}
		
		p++;
	}
	cout << "There is " << count << " vowel in -> " << str;
	return 0;
}
