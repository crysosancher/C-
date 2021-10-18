#include<iostream>
using namespace std;
int main(){
    int a[5]={2,4,6,8,10};
    int *p=a,*q=&a[4];

    cout<<"*p="<<*p<<endl;
    cout<<endl;

    p++;
    cout<<"*p="<<*p<<endl;
    cout<<endl;

    p--;
    cout<<"*p="<<*p<<endl;
    cout<<endl;

    cout<<"p="<<p<<endl;
    cout<<"p+2="<<p+2<<endl;
    cout<<endl;

    cout<<"*p="<<*p<<endl;
    cout<<"*(p+2)="<<*(p+2)<<endl;
    cout<<endl;

    cout<<"q-p="<<q-p<<endl;
    cout<<"p-q="<<p-q<<endl;

    return 0;
}