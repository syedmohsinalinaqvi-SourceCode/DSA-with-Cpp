#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    int original = n;
    int reversed = 0;

    while (n > 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }

    return original == reversed;
}

int main() {
    int x, y;

    cout << "===== PALINDROME COUNTER =====" << endl;
    cout << "Enter lower bound (x): ";
    cin >> x;
    cout << "Enter upper bound (y): ";
    cin >> y;

    int count = 0;
    for (int i = x; i <= y; i++) {
        if (isPalindrome(i)) {
            count++;
        }
    }

    cout << "\nLower bound: " << x << endl;
    cout << "Upper bound: " << y << endl;
    cout << "The number of palindromes is " << count << endl;

    return 0;
}
