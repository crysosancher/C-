#include <iostream>
using namespace std;
int main()
{
    int n, r, count = 0;
    cout << "enter the no" << endl;
    cin >> n;
    //program to find the digits from the no.;
    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        cout << r << endl;
        count++;
    }
    cout << count;
}