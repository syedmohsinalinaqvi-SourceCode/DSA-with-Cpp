#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;

    cout << "===== TRIANGLE CLASSIFIER =====" << endl;
    cout << "Enter three sides of triangle: ";
    cin >> a >> b >> c;

    int sides[3] = { a, b, c };
    sort(sides, sides + 3);
    int shortest = sides[0];
    int middle = sides[1];
    int longest = sides[2];

    if (shortest + middle <= longest) {
        cout << "Not a triangle" << endl;
        return 0;
    }

    bool isEquilateral = (a == b && b == c);
    bool isIsosceles = (a == b || b == c || a == c) && !isEquilateral;
    bool isRight = (shortest * shortest + middle * middle == longest * longest);

    if (isEquilateral) {
        cout << "Equilateral triangle" << endl;
    }
    else if (isRight) {
        cout << "Right triangle" << endl;
    }
    else if (isIsosceles) {
        cout << "Isosceles triangle" << endl;
    }
    else {
        cout << "Regular triangle" << endl;
    }

    return 0;
}
