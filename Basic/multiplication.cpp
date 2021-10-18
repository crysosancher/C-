#include<iostream>
using namespace std;
int main(){
    int n,p;
    cout<<"program to print the multiplication table for the given number by user"<<endl;
    cout<<"enter the no."<<endl;
    cin>> n;
    for(int i=1;i<=10;i++){
        p=i*n;
        cout<<n<<"*"<<i<<"="<<p<<endl;

                 
    }
}