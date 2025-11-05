// week - 10 @mdirshad-25CAMSA158
/*4#  Create a union containing 6 strings: name, home_address, hostel_address, 
city, state and zip. Write a C++ program to display your present address.*/

#include <iostream>
#include <cstring>
using namespace std;

union AddressInfo {
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[10];
};

int main() {
    AddressInfo info;

    // Storing name
    strcpy(info.name, "MD IRSHAD NADAF");
    cout << "Name: " << info.name << endl;

    // Store and display present address (home or hostel)
    strcpy(info.home_address, "Aligarh Muslim University");
    cout << "Present Address: " << info.home_address << endl;

    strcpy(info.city, "Aligarh");
    cout << "City: " << info.city << endl;

    strcpy(info.state, "Uttarprdesh");
    cout << "State: " << info.state << endl;

    strcpy(info.zip, "1234");
    cout << "ZIP Code: " << info.zip << endl;

    return 0;
}

/*  output
Name: MD IRSHAD NADAF
Present Address: Aligarh Muslim University
City: Aligarh
State: Uttarprdesh
ZIP Code: 1234
*/


