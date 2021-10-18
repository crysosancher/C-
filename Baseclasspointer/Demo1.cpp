#include <bits/stdc++.h>
using namespace std;
class base
{
public:
	void fun1()
	{
		cout << "Base class fun" << endl;
	}
};
class Derived : public base
{
public:
	void fun2()
	{
		cout << "Having fun in Derived class\n";
	}
};
int main()
{
	base *p;
	//Derived d;
	p = new Derived(); //its like accepting derive class as base class(Degradtion kind of thing)
	p->fun1();
	//d.fun2();
	//p->fun2();   //Not working bcz fun 2 is not a member of base class
	return 0;
}
