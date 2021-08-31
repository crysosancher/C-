#include <iostream>
using namespace std;
int main()
{
    int a = 0;
    cout<<"while executio";
    while (a < 10)
    {
        cout << a<<endl;
        a++;
    }
    cout<<"do while execution";
    int b = 0;
    do
    {
        cout << b<<endl;
        b++;
    } while (b < 10);
    cout<<"foorloop execution";
    for (int c = 0; c < 10; c++)
    {
        cout << c<<endl;
    }
    return 0;
}