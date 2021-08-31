#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;


int main() {
    int n,i,j;
    cin>>n;
    string a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        //flushall();
    }
    for(j=n-1;j>=0;j--){
        cout<<a[j]<<" ";
    }  
    return 0;
}