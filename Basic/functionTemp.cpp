#include<iostream>
using namespace std;
template<class T>
T maxim(T a,T b){
    return a>b?a:b;
}
int main(){
    cout<<maxim(12,31)<<endl;
    cout<<maxim(12.2f,212.2f)<<endl;
    cout<<maxim(1.2,3.1)<<endl;
    cout<<maxim(1,2)<<endl;
}