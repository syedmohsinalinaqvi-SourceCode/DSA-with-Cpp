// find addition and multiplication of matrices max 3  3 using array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{

    int mat1[3][3], mat2[3][3], mat3[3][3], mat4[3][3];
    int i, j, k, sum;

    cout << "enter the first 3*3 matrix values";
    for (i = 0; i <= 2; i++) 
    {
        for ( j = 0; j <=2; j++)
        {
            cin >> mat1[i][j];
        }
    }
    cout << "enter the second 3*3 matrix values";
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            cin >> mat2[i][j];
        }
    }
    cout << "enter the first 3*3 matrix values";
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            cout << mat1[i][j] << "\t" <<endl;
        }
    }

    cout << "enter the second 3*3 matrix values";
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            cout << mat2[i][j] << "\t" <<endl;
        }
    }

    for ( i = 0; i <=2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            sum = 0;
            mat3[i][j] = 0;
            for (k = 0; k <=0; k++)
            {
                sum = sum + mat1[i][j] * mat2[i][j];
                mat3[i][j] = mat1[i][j] * mat2[i][j];
            }
        }

    }

    cout << " the addition of matrix:\t";
    cout << " the multiplication of matrix:"<<endl;

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        
            cout << mat3[i][j] << "\t";
            cout << "\t";
			for (j = 0; j <= 2; j++)
      
          cout << mat4[i][j] << "\t";
            cout << endl;
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
