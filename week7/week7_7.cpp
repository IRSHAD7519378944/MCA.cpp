//  week - 7        @mdirshad-25CAMSA158

/* 7# Write a C++ program to use this pointer and return the pointer reference. */

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int roll_no;
    string name;

public:
   
    Student* setRoll(int r) {
        this->roll_no = r;
        return this;   
    }

    
    Student* setName(string n) {
        this->name = n;
        return this;   
    }

    
    void display() {
        cout << "Roll No: " << this->roll_no << ", Name: " << this->name << endl;
        cout << "Object Address (this): " << this << endl;
    }
};

int main() {
    Student s1;

    // Function chaining using this pointer
    s1.setRoll(101)->setName("Md Irshad")->display();

    return 0;
}

/*	OUTPUT

Roll No: 101, Name: Md Irshad
Object Address (this): 0x70fe20

*/
