#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of number";
    cin>>n;
    int a[n];

    int key,i;
    cout<<"Enter the numbers";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter key";
    cin>>key;
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            cout<<"Found at"<<i+1;
            return 0;
        }
    }
    cout<<"Key no found";
    return 0;
}