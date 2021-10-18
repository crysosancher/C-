#include<iostream>
using namespace std;
void swap(int a,int b){//formal parameter
    int temp;
    cout<<a<<"  "<<b<<endl;//formal parameter before swapping
    temp=a;
    a=b;
    b=temp;
    cout<<a<<"  "<<b<<endl;//formal paramenter after swapping
    
}
int main(){
int x=10,y=20;//actual parameter
swap(x,y);
cout<<x<<"  " <<y;//actual parameter value didn't get change.


}
