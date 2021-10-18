#include <iostream>
using namespace std;
int main()
{
    int y;
    cout << "enter the year to check  ";
    cin >> y;
    if (y % 4 == 0)
    {
        if (y % 100 == 0)
        {
            if (y % 400 == 0)
                cout << "leap year";
            else
                cout << "not leap year";
        }
        else{
            cout << "leap year";
        }
    }
    else
        cout << "not leap";
    return 0;
}