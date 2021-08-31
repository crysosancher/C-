#include<iostream>
using namespace std;
template <class T>
T add(T a,T b,T c=0)//here c is a default argument.
{
    T s=a+b+c;
    return s;
}
int main(){
    cout<<"sum="<<add(12,21,12)<<endl;
    cout<<"sum=="<<add(12.32,2.23)<<endl;
}
