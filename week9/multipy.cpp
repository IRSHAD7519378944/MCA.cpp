#include<iostream>
using namespace std;
int main(){
	int a=5, b=6, result=0;
	while(b>0){
		if(b&1==1){
			result = result + a;
		}
		a = a<<1;
		b = b>>1;
	}
	cout<< result;
}
