#include <iostream>
using namespace std;
int main()
{
    int j;
    for (int i = 0; i <= 3; i++)
    {
        for (j = 0; j <= 3; j++)
        {
            if (i + j >= 4 - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout<<endl;
    }
    return 0;
}
