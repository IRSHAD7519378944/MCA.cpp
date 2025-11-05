// week - 10 @mdirshad-25CAMSA158
/* 1# Write a C++ program that uses functions to perform the following operations: 
i. Reading a complex number 
ii. Writing a complex number 
iii. Addition and subtraction of two complex numbers 
iv. Multiplication of two complex numbers. 
Note: Represent complex numbers using a structure.*/
#include <iostream>
using namespace std;
struct Complex {
    double real;
    double imag;
};
Complex readComplex() {
    Complex c;
    cout << "Enter real part: ";
    cin >> c.real;
    cout << "Enter imaginary part: ";
    cin >> c.imag;
    return c;
}
void displayComplex(const Complex &c) {
    if (c.imag >= 0)
        cout << c.real << " + " << c.imag << "i";
    else
        cout << c.real << " - " << -c.imag << "i";
}
Complex addComplex(const Complex &c1, const Complex &c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}
Complex subtractComplex(const Complex &c1, const Complex &c2) {
    Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}
Complex multiplyComplex(const Complex &c1, const Complex &c2) {
    Complex result;
    result.real = c1.real * c2.real - c1.imag * c2.imag;
    result.imag = c1.real * c2.imag + c1.imag * c2.real;
    return result;
}
int main() {
    Complex c1, c2, result;    
    cout << "Enter first complex number:\n";
    c1 = readComplex();   
    cout << "Enter second complex number:\n";
    c2 = readComplex();    
    cout << "\nFirst complex number: ";
    displayComplex(c1);
    cout << "\nSecond complex number: ";
    displayComplex(c2);
    result = addComplex(c1, c2);
    cout << "\n\nAddition: ";
    displayComplex(result);  
    result = subtractComplex(c1, c2);
    cout << "\nSubtraction: ";
    displayComplex(result);
    result = multiplyComplex(c1, c2);
    cout << "\nMultiplication: ";
    displayComplex(result);
    return 0;
}
/* output
Enter first complex number:
Enter real part: 2
Enter imaginary part: 3
Enter second complex number:
Enter real part: 1
Enter imaginary part: 2

First complex number: 2 + 3i
Second complex number: 1 + 2i

Addition: 3 + 5i
Subtraction: 1 + 1i
Multiplication: -4 + 7i
