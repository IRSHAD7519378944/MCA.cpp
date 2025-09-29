//  week - 7        @mdirshad-25CAMSA158
/* 6# Write a C++ program to implement a flight class with data members as flight number, 
source, destination, and fare. Write a member function to display the flight information 
using this pointer.*/

#include <iostream>
#include <string>
using namespace std;

class Flight {
private:
    int flight_no;
    string source, destination;
    float fare;

public:
    
    void set_data(int fno, string src, string dest, float fr) {
        this->flight_no = fno;
        this->source = src;
        this->destination = dest;
        this->fare = fr;
    }
    void display() {
        cout << "\n--- Flight Information ---" << endl;
        cout << "Flight Number : " << this->flight_no << endl;
        cout << "Source        : " << this->source << endl;
        cout << "Destination   : " << this->destination << endl;
        cout << "Fare          : " << this->fare << endl;
        cout << "Object Address (this): " << this << endl;
    }
};
int main() {
    Flight f1, f2;

    f1.set_data(101, "Delhi", "Mumbai", 4500.50);
    f2.set_data(202, "Bengaluru", "Kolkata", 6200.75);

    f1.display();
    f2.display();

    return 0;
}
/*	OUTPUT
--- Flight Information ---
Flight Number : 101
Source        : Delhi
Destination   : Mumbai
Fare          : 4500.5
Object Address (this): 0x70fdc0

--- Flight Information ---
Flight Number : 202
Source        : Bengaluru
Destination   : Kolkata
Fare          : 6200.75
Object Address (this): 0x70fde0		*/

