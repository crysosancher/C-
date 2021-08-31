#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "may i know your name" << endl;
    getline(cin, str);
    cout << "welcome mr." << str;
    return 0;
}
