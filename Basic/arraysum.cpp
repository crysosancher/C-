//Wap to calculate the sum of an array.
#include<iostream>
using namespace std;
int main(){
    int s=0,m;
    int arr[]={1,2,3,4,5,6,7,8,9};
    for(auto m:arr){
        s=s+m;
    }
    cout<<"sum="<<s;
    return 0;
    


    
}