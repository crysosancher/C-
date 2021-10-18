#include<iostream>
using namespace std;
int main(){
    int sum=0,i,n;
    cout<<"Enter the array no.";
    cin>>n;
    int arr[n];
    for(int i:arr){
        cout<<"enter the"<<i<<"th number";
        cin>>arr[i];
    }
    for(int k:arr){
        sum=sum+k;
    }
    cout<<sum;
    return 0;
}