#include <iostream>
using namespace std;
int main()
{
    int b, a, c, d;
    cout << "program is to check for nature of root" << endl;
    cout << "enter b,a,c" << endl;
    cin >> b >> a >> c;
    d = b*b -4*a*c;
    if (d == 0)
    {
        cout << "real and equal";
        cout<<(-b/(2*a));
    }
    else if (d > 0)
    {
        cout << "real and unequal";
        cout<<(-b);
    }
    else
        {
            cout << "its Imaginery";
        }
    return 0;
}