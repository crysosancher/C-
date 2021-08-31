#include <bits/stdc++.h>
using namespace std;
class parent
{
public:
	void display()
	{
		cout << "Hi,i'm a Parent Class.\n";
	}
};
class child : public parent
{
public:
	void display() //this is called funtion overiding we are overriding it
	{
		cout << "Hey this is child class.\n";
	}
};
int main()
{
	parent p;
	child c;
	p.display(); //getting parent class function
	c.display(); //getting child class function
}