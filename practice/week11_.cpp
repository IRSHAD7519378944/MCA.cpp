#include <iostream>
using namespace std;

// Function to display menu
void showMenu() {
    cout << "\n--- MENU ---" << endl;
    cout << "1. Reverse of the number" << endl;
    cout << "2. Sum of number with its reverse" << endl;
    cout << "3. Sum of alternate digits" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
}

// Function to reverse a 4-digit number
int reverseNumber(int num) {
    int d1 = num / 1000;
    int d2 = (num / 100) % 10;
    int d3 = (num / 10) % 10;
    int d4 = num % 10;

    return d4 * 1000 + d3 * 100 + d2 * 10 + d1;
}

// Function for sum of number + reverse
int sumWithReverse(int num) {
    int rev = reverseNumber(num);
    return num + rev;
}

// Function for alternate digit sum (1+3 and 2+4)
void alternateDigitSum(int num) {
    int d1 = num / 1000;
    int d2 = (num / 100) % 10;
    int d3 = (num / 10) % 10;
    int d4 = num % 10;

    cout << "Sum of 1st & 3rd digit: " << (d1 + d3) << endl;
    cout << "Sum of 2nd & 4th digit: " << (d2 + d4) << endl;
}

// Main function
int main() {
    int num, choice;

    cout << "Enter a 4-digit number: ";
    cin >> num;

    if(num < 1000 || num > 9999) {
        cout << "Invalid input! Enter a 4-digit number only." << endl;
        return 0;
    }

    do {
        showMenu();
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Reverse: " << reverseNumber(num) << endl;
                break;

            case 2:
                cout << "Sum = " << num << " + " << reverseNumber(num)
                     << " = " << sumWithReverse(num) << endl;
                break;

            case 3:
                alternateDigitSum(num);
                break;

            case 4:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid choice! Try again." << endl;
        }
    } while(choice != 4);

    return 0;
}

