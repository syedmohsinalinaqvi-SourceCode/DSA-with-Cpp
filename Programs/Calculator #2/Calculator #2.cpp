
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int choice;
    double num1, num2, result;
    int n, factorial;

    cout <<  "========== ADVANCED CALCULATOR ==========" << endl;
    cout <<"Available Operations:" << endl;
    cout <<"1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout <<"3. Multiplication (*)" << endl;
    cout <<  "4. Division (/)" << endl;
    cout <<"5. Modulus (%)" << endl;
    cout <<"6. Exponentiation (^)" << endl;
    cout <<"7. Factorial (!)" << endl;
    cout <<"8. Square Root (sqrt)" << endl;
    cout <<"9. Logarithm (log)" << endl;
    cout <<"10. Sine (sin)" << endl;
    cout <<"========================================" << endl;

    cout << "Select operation (1-10): ";
    cin >> choice;

    if (choice >= 1 && choice <= 6) {
        cout << "Enter first operand: ";
        cin >> num1;
        cout << "Enter second operand: ";
        cin >> num2;
    }
    else if (choice == 7 || choice == 8 || choice == 9 || choice == 10) {
        cout << "Enter operand: ";
        cin >> num1;
    }
    else {
        cout << "Invalid operation selected!" << endl;
        return 1;
    }

    switch (choice) {
    case 1:
        result = num1 + num2;
        cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
        break;
    case 2:
        result = num1 - num2;
        cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
        break;
    case 3:
        result = num1 * num2;
        cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
        break;
    case 4:
        if (num2 == 0) {
            cout << "Error: Division by zero!" << endl;
            return 1;
        }
        result = num1 / num2;
        cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
        break;
    case 5:
        if (num2 == 0) {
            cout << "Error: Division by zero!" << endl;
            return 1;
        }
        result = (int)num1 % (int)num2;
        cout << "Result: " << (int)num1 << " % " << (int)num2 << " = " << (int)result << endl;
        break;
    case 6:
        result = pow(num1, num2);
        cout << "Result: " << num1 << " ^ " << num2 << " = " << result << endl;
        break;
    case 7:
        if (num1 < 0) {
            cout << "Error: Factorial of negative number!" << endl;
            return 1;
        }
        factorial = 1;
        for (int i = 1; i <= num1; i++) {
            factorial *= i;
        }
        cout << "Result: " << (int)num1 << "! = " << factorial << endl;
        break;
    case 8:
        if (num1 < 0) {
            cout << "Error: Square root of negative number!" << endl;
            return 1;
        }
        result = sqrt(num1);
        cout << "Result: sqrt(" << num1 << ") = " << result << endl;
        break;
    case 9:
        if (num1 <= 0) {
            cout << "Error: Logarithm undefined for non-positive numbers!" << endl;
            return 1;
        }
        result = log(num1);
        cout << "Result: log(" << num1 << ") = " << result << endl;
        break;
    case 10:
        result = sin(num1);
        cout << "Result: sin(" << num1 << ") = " << result << endl;
        break;
    default:
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
