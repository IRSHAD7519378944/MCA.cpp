//  week - 7        @mdirshad-25CAMSA158

/* 5# Develop a C++ program to find the greatest of two numbers using this pointer, which 
returns the member variable. */

#include <iostream>
using namespace std;

class Greatest {
private:
    int a, b;

public:

    void set_data(int x, int y) {
        a = x;
        b = y;
    }

    int find_greatest() {
        if (this->a > this->b) {
            return this->a;  
        } else {
            return this->b;  
        }
    }
};

int main() {
    Greatest obj;
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    obj.set_data(num1, num2);

    cout << "Greatest number is: " << obj.find_greatest() << endl;

    return 0;
}


/*	OUTPUT

Enter two numbers: 120 158
Greatest number is: 158

*/
