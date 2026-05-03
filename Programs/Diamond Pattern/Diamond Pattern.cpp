#include <iostream>
using namespace std;

int main() {
    int size = 7;
    int i, j, k;

    cout << "===== DIAMOND PATTERN =====" << endl;

    // Upper half including middle
    for (i = 1; i <= size; i++) {
        for (j = 1; j <= size - i; j++) {
            cout << " ";
        }
        for (k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half
    for (i = size - 1; i >= 1; i--) {
        for (j = 1; j <= size - i; j++) {
            cout << " ";
        }
        for (k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
