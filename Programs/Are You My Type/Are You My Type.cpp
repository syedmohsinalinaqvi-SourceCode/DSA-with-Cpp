#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;

    cout << "===== NUMBER TYPE CLASSIFIER =====" << endl;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num <= 0) {
        cout << "Invalid input!" << endl;
        return 1;
    }

    cout << "Factors are: ";
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            cout << i << " ";
            sum += i;
        }
    }
    cout << endl;
    cout << "Sum is: " << sum << endl;

    if (sum > num) {
        cout << num << " is ABUNDANT" << endl;
    }
    else if (sum < num) {
        cout << num << " is DEFICIENT" << endl;
    }
    else {
        cout << num << " is PERFECT" << endl;
    }

    return 0;
}
