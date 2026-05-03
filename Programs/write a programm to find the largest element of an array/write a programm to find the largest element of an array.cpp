// write a programm to find the largest element of an array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int i, n;
	float arr[100];

	cout << "enter total number of element of array" << endl;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cout << "enter numbers" << i + 1 << endl;
			cin>>arr[i];
	}
	for (i = 1; i < n; i++)
	{
		if (arr[0] < arr[i])
			arr[0] = arr[i];
				}
	cout << "largest element" << arr[0];


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
