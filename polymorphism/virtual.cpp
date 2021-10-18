#include <bits/stdc++.h>
using namespace std;
class parent
{
public:
	virtual void display()//without virtual keyboard it would have called base class function only but with it it will call derived class fun.
	{
		cout << "Hi,i'm a Parent Class.\n";
	}
};
class child : public parent
{
public:
	 void display()//this is called funtion overiding we are overriding it 
	{
		cout << "Hey this is child class.\n";
	}
};
int main(){
	 child d;
	 parent *p=&d;
	//parent *p=new child();//the above lines doo the same job
	p->display();
}