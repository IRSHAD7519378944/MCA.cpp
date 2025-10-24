#include <iostream>
using namespace std;

struct MyStruct {
    int a;
    float b;
};

union MyUnion {
    int a;
    float b;
};

int main() {
    MyStruct s = {5, 3.14};
    cout << "Struct: a = " << s.a << ", b = " << s.b << endl; // 5  3.14

    MyUnion u;
    u.a = 5;
    cout << "Union after u.a=5: a = " << u.a << ", b = " << u.b << endl;  // 5  garbage
    u.b = 3.14;
    cout << "Union after u.b=3.14: a = " << u.a << ", b = " << u.b << endl; // garbage 3.14

    return 0;
}

