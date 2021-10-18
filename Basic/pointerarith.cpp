#include<iostream>
using namespace std;
int main(){
    int a[5]={2,4,6,8,10};
    int *p=a;//Heap memory created
    cout<<*p<<endl;
    p++;
    cout<<*p<<endl;
    p=p+2;
    cout<<*p<<endl;
    return 0;
}