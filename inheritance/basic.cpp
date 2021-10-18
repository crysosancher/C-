#include <bits/stdc++.h>
//#include <iostream>
using namespace std;
class Base
{
public:
	int x;
	void show()
	{
		cout << x<<endl;
	}
};
class Derived :public Base
{
public:
	int y;
	void display()
	{
		cout << x << " " << y;
		
	}
};
int main()
{
	Base b;
	b.x = 25;
	b.show();
	Derived d;
	d.x = 10;
	d.y = 15;
	d.show();
	d.display();
	return 0;
}
