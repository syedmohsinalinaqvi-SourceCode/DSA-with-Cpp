// find all roots of quadratic equation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <math.h>
int main()
{
	float a, b, c, x1, x2, discriminant, realpart, imaginarypart;


	cout << "enter all roots";
	cin >> a>>b>>c;

	discriminant = b * b - 4 * a * c;
	if (discriminant > 0)
	{
		x1 = (-b + sqrt(discriminant)) / (2 * a);
		x2 = (-b - sqrt(discriminant)) / (2 * a);
	
		cout << "roots arew breal and different" << endl;
		cout << "x1 is" << x1 << endl;
		cout << "x2 is" << x2 << endl;
	
	}
	else if (discriminant == 0)
	{
		cout << R"(roots are real and same)" << endl;
		x1 = (-b + sqrt(discriminant)) / (2 * a);
		cout << "x1=x2 =" << x1 << endl;

	}

	else {
		realpart = -b / (2 * a);
		imaginarypart = sqrt(-discriminant) / (2 * a);
		cout << "roots are complex and dfifferent\n";
		cout << "x1 is" << realpart << "+" << imaginarypart << "i\n";
		cout << "x2 is" << realpart << "-" << imaginarypart << "i\n";
	}












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
