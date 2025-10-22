#include <iostream>
#include <string>
using namespace std;

// Union to store address details
union Address {
    string name;
    string home_address;
    string hostel_address;
    string city;
    string state;
    string zip;
};

int main() {
    Address myAddress;

    // Note: Since union can hold only one member at a time,
    // we can store only one string meaningfully at a time.
    cout << "Enter your present address (hostel address): ";
    getline(cin, myAddress.hostel_address);

    cout << "\nYour present address is: " << myAddress.hostel_address << endl;

    return 0;
}

