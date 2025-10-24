/*5#  Write a C++ program to define a structure named D.O.B., which contains 
name, day, month and year. Using the concept of nested structures display your 
name and date of birth.*/

#include <iostream>
#include <string>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};


struct DOB {
    string name;
    Date dob;    // Nested structure
};

int main() {
    DOB person;

    // Input person's name
    cout << "Enter your name: ";
    getline(cin, person.name);

    // Input date of birth
    cout << "Enter day of birth: ";
    cin >> person.dob.day;
    cout << "Enter month of birth: ";
    cin >> person.dob.month;
    cout << "Enter year of birth: ";
    cin >> person.dob.year;

    // Display name and date of birth
    cout << "\nName: " << person.name << endl;
    cout << "Date of Birth: " 
         << person.dob.day << "/" 
         << person.dob.month << "/" 
         << person.dob.year << endl;

    return 0;
}

