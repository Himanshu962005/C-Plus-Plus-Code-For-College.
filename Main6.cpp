// C++ Program sum of two matrices.
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i, j, m1[3][3], m2[3][3], sum[3][3];
    system("cls");
    cout << "Enter the elements of first matrices\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> m1[i][j];
        }
    }
    cout << "Enter of first matrices are" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << m1[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "Enter the elements of second matrices\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> m2[i][j];
        }
    }
    cout << "Enter of second matrices are" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << m2[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "Sum of two matrices\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum[i][j] = m1[i][j] + m2[i][j];
            cout << sum[i][j] << "\t";
        }
        cout << endl;
    }
    getch();
}