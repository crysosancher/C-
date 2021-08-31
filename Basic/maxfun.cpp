#include<iostream>//program to find max number between 3 numbers
using namespace std;
int max(int a,int b,int c){
    if(a>b && a>c)
    return a;
    else if(b>a && b>c)
    return b;
    else 
    return c;
}
int main(){
    int a,b,c,z;
    cout<<"enter the three numbers"<<endl;
    cin>>a>>b>>c;
    z=max(a,b,c);
    cout<<"The max no. is="<<z;
    return 0;
}