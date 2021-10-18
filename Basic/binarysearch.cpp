#include <iostream>
using namespace std;
int main()
{
    int a[10],l=0,h=9,key,i;
    int mid;
    cout<<"Enter the 10 array numbers in sorted form";
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the key";
    cin>>key;
    while (l<=h){
        mid=(l+h)/2;
        if(key==a[mid]){
            cout<<"key found at="<<mid;
            return 0;
        }
        else if(key<a[mid])h=mid+1;
        else l=mid+1;
    }
    cout<<"not found";
    return 0;
}    

