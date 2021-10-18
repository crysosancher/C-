#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float r1,r2,a,b,c;
    cout <<"enter a,b,c"<<endl;
    cin>>a,b,c;
    r1=(-b+sqrt(b*b-4*a*c)/2*a);
    r2=(-b-sqrt(b*b-4*a*c)/2*a);
    cout<<"roots are"<<r1<<"/n"<<r2;
    return 0;

}