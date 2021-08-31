#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char *s;
    cout << "Enter a string";
    cin.getline(s,50);
    cout << strlen(s) << endl;
    return 0;
}
