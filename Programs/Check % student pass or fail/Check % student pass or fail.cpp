// Check % student pass or fail.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <conio.h>
int main()
{
    float s1, s2, s3, s4, s5, perc, total;

    cout << "Enter marks for 5 subjects (space-separated): ";
    if (!(cin >> s1 >> s2 >> s3 >> s4 >> s5)) {
        cerr << "Invalid input\n";
        return 1;
    }

    total = s1 + s2 + s3 + s4 + s5;
    perc = total / 5.0f;

    cout << "Total: " << total << "\nPercentage: " << perc << "%\n";
    if (perc >= 40.0f)
        cout << "Result: Pass\n";
    else
        cout << "Result: Fail\n";

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
