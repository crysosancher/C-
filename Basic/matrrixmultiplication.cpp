#include <iostream>
using namespace std;
int main()
{
    int a[10], b[10][10], multi[10][10], r1, c1, r2, c2, i, j, k;
    cout << "Enter rows and coloumns for the first matrix";
    cin >> r1 >> c1;
    cout << "Enter rows and coloums for the second coloumns";
    cin >> r2 >> c2;
    if (c1 != r2)
    {
        cout << "can't be multiplied";
        return 0;
    }
    //storing elements of first matrix.
    cout << endl
         << "Enter the elements of matrix 1:" << endl;
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c1; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << ":";
            cin >> a[i][j];
        }
    //storing elements for second matrix.
    cout << endl
         << "Enter the elements of matrix 2:" << endl;
    for (i = 0; i < r2; ++i)
        for (j = 0; j < c2; ++j)
        {
            cout << "Enter element b" << i + 1 << ":";
            cin >> b[i][j];
        }
    //multipying matrix a and b and storing in array mult.
    for (i = 0; i < r1; ++i)
    {
        for (j = 0; j < c2; ++k)
        {
            multi[i][j] = 0;
            for (k = 0; k < c1; ++k)
            {
                multi[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    //displaying the multiplication of two matrix.
    cout << endl
         << "output Matrix" << endl;
    for (i = 0; i < r1; ++i)
    {
        for (j = 0; j < c2; ++j)
        {
            cout << " " << multi[i][j];
            if (j == c2 - 1)
                cout << endl;
        }
    }
    return 0;
}