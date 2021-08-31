#include<iostream>
using namespace std;
int main(){
    int day;
    cout<<"enter the day no."<<endl;
    cin>>day;
    switch(day)
    {
        case 1:
        cout<<"monday";
        break;
        case 2:
        cout<<"Tuesday";
        break;
        case 3:
        cout<<"Wednesday";
        break;
        case 4:
        cout<<"Thrusday";
        break;
        case 5:
        cout<<"Friday";
        break;
        case 6:
        cout<<"Saturday";
        case 8:
        cout<<"Sunday";
        break;
        default:
        cout<<"ja re baba yeah scheme tere liye nahi hai re baba"<<endl;
    }
}