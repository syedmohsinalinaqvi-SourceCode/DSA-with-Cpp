#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int reverseNumber(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}

int main() {
    int X, Y;

    cout << "===== PRIME WITH PRIME PALINDROME =====" << endl;
    cout << "Enter X (lower bound > 1): ";
    cin >> X;
    cout << "Enter Y (upper bound): ";
    cin >> Y;

    cout << "\nPrime numbers with prime reverses:" << endl;

    for (int i = X; i <= Y; i++) {
        if (isPrime(i)) {
            int rev = reverseNumber(i);
            if (isPrime(rev)) {
                cout << i << " ";
            }
        }
    }
    cout << endl;

    return 0;
}
