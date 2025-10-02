//  week - 4        @mdirshad-25CAMSA158

/*  Write a C++ program to check whether a given 3-digit number is an Armstrong  number  */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a 3digit number : ";
    cin>>n;
    int sum=0,temp;
    temp=n;
    while(n){
       sum=sum+(n%10)*(n%10)*(n%10);
       n=n/10;
    }
    if(sum==temp)
        cout <<temp<< " is an Armstrong" ;
    else
        cout <<temp<< " is not an Armstrong";
    return 0;
}
/*	OUTPUT

Enter a 3digit number : 153
153 is an Armstrong

Enter a 3digit number : 547
547 is not an Armstrong			*/
