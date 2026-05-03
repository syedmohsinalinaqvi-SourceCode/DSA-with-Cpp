#include <iostream>
#include <string>
using namespace std;

int main() {
    string t1 = "Pakistan", t2 = "India", t3 = "Bangladesh";
    string t4 = "New Zealand", t5 = "SriLanka", t6 = "West Indies";
    int p1 = 99, p2 = 52, p3 = 80, p4 = 72, p5 = 45, p6 = 84;

    string first, second, third;
    int firstP = -1, secondP = -1, thirdP = -1;

    // First place
    if (p1 >= p2 && p1 >= p3 && p1 >= p4 && p1 >= p5 && p1 >= p6) {
        first = t1; firstP = p1;
    }
    else if (p2 >= p1 && p2 >= p3 && p2 >= p4 && p2 >= p5 && p2 >= p6) {
        first = t2; firstP = p2;
    }
    else if (p3 >= p1 && p3 >= p2 && p3 >= p4 && p3 >= p5 && p3 >= p6) {
        first = t3; firstP = p3;
    }
    else if (p4 >= p1 && p4 >= p2 && p4 >= p3 && p4 >= p5 && p4 >= p6) {
        first = t4; firstP = p4;
    }
    else if (p5 >= p1 && p5 >= p2 && p5 >= p3 && p5 >= p4 && p5 >= p6) {
        first = t5; firstP = p5;
    }
    else {
        first = t6; firstP = p6;
    }
/*
    // Second place
    if (t1 != first && p1 > secondP) {
        if ((p1 >= p2 || t2 == first) && (p1 >= p3 || t3 == first) &&
            (p1 >= p4 || t4 == first) && (p1 >= p5 || t5 == first) && (p1 >= p6 || t6 == first)) {
            second = t1; secondP = p1;
        }
    }
    if (t2 != first && p2 > secondP) {
        second = t2; secondP = p2;
    }
    if (t3 != first && p3 > secondP) {
        second = t3; secondP = p3;
    }
    if (t4 != first && p4 > secondP) {
        second = t4; secondP = p4;
    }
    if (t5 != first && p5 > secondP) {
        second = t5; secondP = p5;
    }
    if (t6 != first && p6 > secondP) {
        second = t6; secondP = p6;
    }

    // Third place
    thirdP = -1;
    if (t1 != first && t1 != second && p1 > thirdP) { third = t1; thirdP = p1; }
    if (t2 != first && t2 != second && p2 > thirdP) { third = t2; thirdP = p2; }
    if (t3 != first && t3 != second && p3 > thirdP) { third = t3; thirdP = p3; }
    if (t4 != first && t4 != second && p4 > thirdP) { third = t4; thirdP = p4; }
    if (t5 != first && t5 != second && p5 > thirdP) { third = t5; thirdP = p5; }
    if (t6 != first && t6 != second && p6 > thirdP) { third = t6; thirdP = p6; }
    */
    cout << "T20 World Cup - Top 3 Teams" << endl;
    cout << "==========================" << endl;
    cout << "1st Place: " << first << " (" << firstP << " points)" << endl;
    cout << "2nd Place: " << second << " (" << secondP << " points)" << endl;
    cout << "3rd Place: " << third << " (" << thirdP << " points)" << endl;

    return 0;
}
