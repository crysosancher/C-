#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str, str2;
    str2.resize(str.length());
    int i, j;
    cout << "Enter the array to be checked" << endl;
    cin >> str;
    cout<<str.length();
    for (i = 0, j = str.length(); j>=0; i++,j--)
    {
        str2[j] = str[i];
    }
    cout << str2;

    return 0;
}