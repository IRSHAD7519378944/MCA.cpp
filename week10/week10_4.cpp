/*4#  Create a union containing 6 strings: name, home_address, hostel_address, 
city, state and zip. Write a C++ program to display your present address.*/

#include <iostream>
#include <string>
using namespace std;

struct Address {
    string name;
    string home_address;
    string hostel_address;
    string city;
    string state;
    string zip;
};

int main() {
    Address addr;

    cout << "Enter your present (hostel) address: ";
    getline(cin, addr.hostel_address);

    cout << "\n--- Present Address ---\n";
    cout << "Hostel Address: " << addr.hostel_address << endl;

    return 0;
}



