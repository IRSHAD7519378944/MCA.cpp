#include <iostream>
#include <iomanip> // for setw and fixed
using namespace std;

// Structure to store employee details
struct Employee {
    string name;
    double basicPay;
    double grossSalary;
};

// Function to calculate gross salary
double calculateGross(double basicPay) {
    double DA = 0.52 * basicPay; // DA = 52% of basic pay
    return basicPay + DA;
}

int main() {
    const int NUM_EMPLOYEES = 100;
    Employee employees[NUM_EMPLOYEES];

    cout << fixed << setprecision(2); // To display salaries with 2 decimal places

    // Input employee details
    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        cout << "Enter name of employee " << i + 1 << ": ";
        cin.ignore(); // To clear the input buffer
        getline(cin, employees[i].name);
        cout << "Enter basic pay of " << employees[i].name << ": ";
        cin >> employees[i].basicPay;

        // Calculate gross salary
        employees[i].grossSalary = calculateGross(employees[i].basicPay);

        cout << endl;
    }

    // Print employee name and gross salary
    cout << "\nEmployee Name\tGross Salary\n";
    cout << "-----------------------------\n";
    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        cout << setw(15) << left << employees[i].name
             << setw(10) << right << employees[i].grossSalary << endl;
    }

    return 0;
}

