/*2#  Write a C++ program to compute the monthly pay of 100 employees using each 
employee's name, basic pay. The DA is calculated as 52% of the basic pay. 
Gross-salary (basic pay + DA). Print the employee's name and gross salary. */

#include <iostream>
#include <string>
using namespace std;

int main() {
    const int numEmployees = 3;
    string name[numEmployees];
    float basicPay[numEmployees], DA[numEmployees], grossSalary[numEmployees];

    cout << "Enter employee details (Name and Basic Pay):\n";

    for (int i = 0; i < numEmployees; i++) {
        cout << "\nEmployee " << i + 1 << ":\n";
        cout << "Name: ";
        cin >> name[i];
        cout << "Basic Pay: ";
        cin >> basicPay[i];

        // Calculate DA (52% of basic pay)
        DA[i] = 0.52 * basicPay[i];

        // Calculate Gross Salary
        grossSalary[i] = basicPay[i] + DA[i];
    }

    cout << "\n--- Employee Gross Salary Details ---\n";
    cout << "Name\t\tGross Salary\n";

    for (int i = 0; i < numEmployees; i++) {
        cout << name[i] << "\t\t" << grossSalary[i] << endl;
    }

    return 0;
}

