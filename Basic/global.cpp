#include <iostream>
using namespace std;
int g = 0; //global variable
void fun()
{
    int a = 5; //local
    g = g + a;
    cout << g << endl;
}
int main()
{
    int x = 10; //local
    g = 15;
    fun();
    g++;
    cout << g << endl;
    cout << ::g;
    return 0;
}