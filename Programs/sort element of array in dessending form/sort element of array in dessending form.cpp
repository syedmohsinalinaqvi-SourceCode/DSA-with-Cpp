// sort element of array in dessending form.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int number[30];
		int i, j, n, a;

		cout << "enter the value of N" << endl;
		cin >> n;

		cout << "enter numbers of array" << endl;
		for (i = 0; i <= n; i++)
			cin >> number[i];

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (number[i] < number[j])
				{
					a = number[i];
					number[i] = number[j];
					number[j] = a;
				}

			}
		}

		cout << "number arranged in dessending order" << endl;
		for (i = 0; i < n; i++)
			cout << number[i] << "" << endl;





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
