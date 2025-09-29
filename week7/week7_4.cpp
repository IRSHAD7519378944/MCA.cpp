//  week - 7        @mdirshad-25CAMSA158

/* 4# Write a C++ program to create three objects for a class named pntr_obj with data 
members such as roll_no & name. Create a member function set_data() for setting the 
data values and a print() member function to print which object has invoked it using the 
'this' pointer.*/

#include <iostream>
#include <string>

using namespace std;

class pntr_obj {
private:
    int roll_no;
    string name;

public:
    // Function to set data
    void set_data(int r, string n) {
        roll_no = r;
        name = n;
    }

    // Function to print data & show which object invoked it
    void print() {
        cout << "Object Address (this pointer): " << this << endl;
        cout << "Roll No: " << roll_no << ", Name: " << name << endl;
        cout << "---------------------------------" << endl;
    }
};

int main() {
    // Create 3 objects
    pntr_obj obj1, obj2, obj3;

    // Set data
    obj1.set_data(101, "Irshad");
    obj2.set_data(102, "Javed");
    obj3.set_data(103, "Firdos");

    // Print data
    obj1.print();
    obj2.print();
    obj3.print();

    return 0;
}

/*	OUTPUT

Object Address (this pointer): 0x70fe00
Roll No: 101, Name: Irshad
---------------------------------
Object Address (this pointer): 0x70fdf0
Roll No: 102, Name: Javed
---------------------------------
Object Address (this pointer): 0x70fde0
Roll No: 103, Name: Firdos
---------------------------------	*/
