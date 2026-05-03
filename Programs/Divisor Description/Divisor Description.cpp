#include <iostream>
using namespace std;

int countDivisors(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int X, Y, N;

    cout << "===== DIVISORS FINDER =====" << endl;
    cout << "Enter X (lower bound): ";
    cin >> X;
    cout << "Enter Y (upper bound): ";
    cin >> Y;
    cout << "Enter N (number of divisors): ";
    cin >> N;

    cout << "\nNumbers between " << X << " and " << Y << " with exactly " << N << " divisors:" << endl;

    for (int i = X; i <= Y; i++) {
        if (countDivisors(i) == N) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
