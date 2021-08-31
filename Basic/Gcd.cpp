#include <iostream>
using namespace std;
int main()
{
    cout << "enter two no. to find GCD" << endl;
    int n1, n2;
    cin >> n1 >> n2;
    while (n1 != n2)
    {
        if (n1 > n2)
            n1 = n1 - n2;
        else if (n2 > n1)
            n2 = n2 - n1;
    }
    cout << "The gcd is=" << n1;
    return 0;
}