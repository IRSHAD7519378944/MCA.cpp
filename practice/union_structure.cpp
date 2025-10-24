// difference between union and structure
// structure
/*#include <iostream>
using namespace std;

struct MyStruct {
    int a;
    float b;
    char c;
};

int main() {
    // Initialize all members
    MyStruct s = {10, 3.5, 'X'};

    cout << "Struct values: " << endl;
    cout << "a = " << s.a << endl;  // 10
    cout << "b = " << s.b << endl;  // 3.5
    cout << "c = " << s.c << endl;  // X

    return 0;
}*/

// union

#include <iostream>
using namespace std;

union MyUnion {
    int a;
    float b;
};

int main() {
    // Initialize the first member only
    MyUnion u = {10};

    cout << "After initializing a = 10:" << endl;
    cout << "a = " << u.a << endl;  // 10
    cout << "b = " << u.b << endl;  // junk value

    // Assign value to another member
    u.b = 3.5;
    cout << "\nAfter assigning b = 3.5:" << endl;
    cout << "a = " << u.a << endl;  // value overwritten, junk now
    cout << "b = " << u.b << endl;  // 3.5

    return 0;
}

