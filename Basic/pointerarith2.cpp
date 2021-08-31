#include<iostream>
using namespace std;
int main(){
    int a[5]{2,4,6,8,10};
    int *p=a,*q=&a[4];

    cout<<q-p;
    return 0;
}