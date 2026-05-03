// write a program to sort elements of an array in assending ordr.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int i, a[5], j, temp;

    cout << "enter any five number" << endl;
    for (i = 0; i <= 4; i++)
        cin >> a[i];

    cout << "data before sorting" << endl;
    for (j = 0; j <= 4; j++)
        cout << a[j];
    for (i = 0; i <= 4; i++)
    
        for(j = 0; j <= 3; j++)

            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
    }

    cout << "data after sorting" << endl;
    for (i = 0; i <= 4; i++)
        cout << a[j] << "";


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
