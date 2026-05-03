#include <iostream>
#include <string>
using namespace std;

int main() {
    string num;

    cout << "===== MAGIC NUMBER CHECKER =====" << endl;
    cout << "Enter a positive integer (2-9 digits): ";
    cin >> num;

    if (num.length() < 2 || num.length() > 9) {
        cout << "Error: Number must have 2-9 digits!" << endl;
        return 1;
    }

    bool isMagic = true;

    for (size_t i = 1; i <= num.length(); i++) {
        string segment = num.substr(0, i);
        long long segNum = stoll(segment);

        if (segNum % i != 0) {
            isMagic = false;
            break;
        }
    }

    cout << num;
    if (isMagic) {
        cout << " is a magic number" << endl;
    }
    else {
        cout << " is not a magic number" << endl;
    }

    return 0;
}
