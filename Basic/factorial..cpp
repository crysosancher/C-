#include<iostream>
using namespace std;
int main(){
    cout<<"program to find out the factorial of a number"<<endl;
    int n,i,j,t;
    long double p=1;
    cout<<"enter the no.of cases"<<endl;//show the no. of numbers they want to calculate 
    cin>>t;
    for(int j=1;j<=t;j++){
        cin>>n;
    for(i=n;i>=1;i--)
    {
        p=p*i;
    }
    cout<<"factorial="<<p;
    }

}