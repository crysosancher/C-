#include<iostream>
using namespace std;
int main(){
    int max=0,i;
    int arr[]={1,2,3,4,53,32};
    for(int i:arr){
        if(max>=i)
        max=max;
        else
        max=i;

    }
    cout<<max;
    return 0;
}