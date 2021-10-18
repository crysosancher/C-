#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter Your age:"<<endl;
    cin>>age;
    if(age>=12 && age<=50)
    {
        cout<<"young"<<endl;
    }
    else{
        cout<<"not Young"<<endl;
    }
    if(age>12 || age<50)
    {
        cout<<"Eligible for the offer"<<endl;
    }
    else
    {
        cout<<"Not eligible for the offer"<<endl;
    }
}