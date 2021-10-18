#include <iostream>
using namespace std;
int main()
{
    cout << "program to find out the perfect no." << endl;
    int n, s = 0, t;
    cout << "enter the no. of cases" << endl;
    cin >> t;
    //cout<<"Enter the no. to check for perfect no."<<endl;
    for (int j = 1; j <= t; j++)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
                s = s + i;
        }
        if (s == (2 * n))
            cout << "the no." << n << "is perfect";
        else
            cout << "The no.  " << n << " is not perfect";
    }
}
