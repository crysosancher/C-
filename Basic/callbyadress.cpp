#include<iostream>
using namespace std;
void swap(int *a,int *b)//formal parameter are in the form of pointers 
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int x=10,y=20;
    swap (&x,&y);//actual parameter are in the form of adress 
    cout<<x<<"  "<<y;
    return 0;
}