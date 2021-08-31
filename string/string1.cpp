#include<iostream>
using namespace std;
int main()
{
    char s[]="vibhu pandey";
    cout<<s<<endl;
    char  g[]={75,75,78,'\0'};//    \0 is required as a null character or else it wil get attach with vibhu pndey,'\0'=0 only
    cout<<g<<endl;
    char *i="hemlo";//advised not to use pointer ,better go for class string.
    cout<<i;
    return 0;
}