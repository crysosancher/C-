#include<iostream>
using namespace std;
int main(){
    int s=0,i,n;
    cout<<"enter the last no. till which you want sum"<<endl;
    cin>>n;
    for(i=0;i<=n;i++)
    {
        s=s+i;
    }
    cout<<"sum="<<s;
    return 0;
}