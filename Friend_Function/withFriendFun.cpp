#include <bits/stdc++.h>
using namespace std;
class test
{
	int c; //private;
public:
	int a;
	friend void fun();//Friend function can access all the member function of the class only uppon an object


protected:
	int b;
};
void fun()
{
	test f;
	//c=25;//Directly friend fun. can also not access but uppon object it can access
	f.c = 25;
	f.a = 56;
	f.b = 69;
	cout<<f.a<<endl<<f.c<<endl<<f.b<<endl;
	
}
int main(){
	fun();
}