#include<bits/stdc++.h>
using namespace std;
class Base{
	public:
	Base(){
		cout<<"Default of Base"<<endl;
	}
	Base(int x){
		cout<<"Param of base"<<x<<endl;
	}
};
class Derived:public Base{
	public:
	Derived (){
		cout<<"Default of Derived"<<endl;
	}
	Derived(int a){
		cout<<"Param of derived"<<a<<endl;
	}
	Derived(int x,int a):Base(x){
		cout<<"Double Param of Derived"<<a<<endl;
	}
};
int main(){
	Derived d;
	// Derived d(30);
	// Derived f(20,50);
	return 0;
}