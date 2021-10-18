#include<iostream>
using namespace std;
void fun(){
    static int g=0;
    int a=10;
    g++;
    cout<<a<<" "<<g<<endl;
}
int main(){
    fun();
    fun();
    fun();
}
