// convertion fehrenheit to celsius or celsius to fehrenheit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	float temp, res;
	int choice;

	cout << "\t\t\t\t\t Temperature Convertion" << endl;
	cout << "\t\t\t\t\t Fehrenheit to Celsius" << endl;
	cout << "\t\t\t\t\t Celsius to Fehrenheit"<< endl;
	cout << "\t\t\t\t\t______________________" << endl;

	cout << "enter your choice:" << endl;
	cin >> choice;

	switch (choice)
	{
	case 1:
	{
		cout << "enter temp in fehr" << endl;
		cin >> temp;
		res = (temp - 32) / 1.8;
	
	}
			break;
	case 2:
	{
		cout << "enter temp in cels" << endl;
		cin >> temp;
		res = (temp *1.8) + 1.8;

	}
	break;
	}
	cout << "\t\t*\t\t\t\**************** "  << endl;
	cout << "\t\t*\t\t\t\conveted temp is " << res << endl;
	cout << "\t\t*\t\t\t\**************** " << endl;








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
