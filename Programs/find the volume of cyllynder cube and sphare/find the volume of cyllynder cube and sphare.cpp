// find the volume of cyllynder cube and sphare.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	float r, r1, h, vol, a;

	cout << "enter the radius and height\n";
	cin >> r >> h;
	cout << "enter side of a cube \n";
	cin >> a;

	cout << "enter the radius of sphare\n";
			cin >> r1;
		vol = 3.14 * r * r * h;
		cout << "volume of cyllinder" << vol << endl;

		vol = a * a * a;
		cout << "volume of cube " << vol << endl;
		
		vol = 4 * 3.14 * (r1 * r1 * r1) / 3;
		cout << "volume of sphare" << vol << endl;





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
