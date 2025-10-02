//  week - 4        @mdirshad-25CAMSA158

/*  4#  A Fibonacci sequence is defined as follows: The first and second terms in the 
sequence are 0 and 1. Subsequent terms are found by adding the preceding two terms in 
the sequence. Write a C++ program to generate the first n terms of the sequence. */

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "How many number U want to print Fibonacci Series " << endl;
    cin>>n;
    int a=-1,b=1,fib;

    for(int i=1; i<=n; i++){
        fib=a+b;
        cout <<fib<< " ";
        a=b;
        b=fib;
    }
    return 0;
}
/*  OUTPUT

How many number U want to print Fibonacci Series
16
0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610			*/
