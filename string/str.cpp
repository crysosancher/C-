#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s1[20] = "Moring   ";
    char s2[30] = "o";

    cout<<strstr(s1,s2)<<endl;
    
    return 0;
}