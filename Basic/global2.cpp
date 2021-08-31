#include<iostream>
using namespace std;
int x=0;
int main(){
    int x=20;{
        int x=30;
        cout<<"int 3="<<x<<endl;
    }
    cout<<"int 2="<<x<<endl;
    cout<<"int="<<::x<<endl;//use of scope resolution
}