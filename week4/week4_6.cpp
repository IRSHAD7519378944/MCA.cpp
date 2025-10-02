//  week - 4        @mdirshad-25CAMSA158
/*  6#   A character is entered through keyboard. Write a C++ program to determine 
whether the character entered is a capital letter, a small case letter, a digit or a 
special symbol using if-else and switch case.  */
#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character : ";
    cin>>ch;
    if(ch>=48 && ch<=57)
        cout<<ch<< " is Digit";
    else if(ch>=65 && ch<=97)
        cout<<ch<< " is an Upper case character";
    else if(ch>=97 && ch<=122)
        cout<<ch<< " is a Lower case character";
    else
        cout <<ch<< " is a Symbole";
    return 0;
}
/*	OUTPUT
Enter a character : $
$ is a Symbole

Enter a character : 8
8 is Digit

Enter a character : M
M is an Upper case character			*/
