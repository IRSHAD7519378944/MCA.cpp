/* 1# Write a C++ program that uses functions to perform the following operations: 
i. Reading a complex number 
ii. Writing a complex number 
iii. Addition and subtraction of two complex numbers 
iv. Multiplication of two complex numbers. Note: Represent complex 
numbers using a structure. */

#include <iostream>
using namespace std;

// Structure to represent a complex number
struct Complex {
    double real;
    double imag;
};

// Function to read a complex number
Complex readComplex() {
    Complex c;
    cout << "Enter real part: ";
    cin >> c.real;
    cout << "Enter imaginary part: ";
    cin >> c.imag;
    return c;
}

// Function to display a complex number
void displayComplex(const Complex &c) {
    if (c.imag >= 0)
        cout << c.real << " + " << c.imag << "i";
    else
        cout << c.real << " - " << -c.imag << "i";
}

// Function to add two complex numbers
Complex addComplex(const Complex &c1, const Complex &c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

// Function to subtract two complex numbers
Complex subtractComplex(const Complex &c1, const Complex &c2) {
    Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

// Function to multiply two complex numbers
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
    
    // Addition
    result = addComplex(c1, c2);
    cout << "\n\nAddition: ";
    displayComplex(result);
    
    // Subtraction
    result = subtractComplex(c1, c2);
    cout << "\nSubtraction: ";
    displayComplex(result);
    
    // Multiplication
    result = multiplyComplex(c1, c2);
    cout << "\nMultiplication: ";
    displayComplex(result);
    
    cout << endl;
    return 0;
}

