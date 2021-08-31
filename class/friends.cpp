#include <iostream>
using namespace std;
class complex
{
private:
	int real;
	int img;

public:
	complex(int r = 0, int i = 0)
	{
		real = r;
		img = i;
	}
	void display()
	{
		cout << real << "+i" << img;
	}
	friend complex operator+(complex c1, complex c2);//using frnd make its use its private function too
};
complex operator+(complex c1, complex c2) //complex add(complex c)
{
	complex temp;
	temp.real = c1.real + c2.real;
	temp.img = c1.img + c2.img;
	return temp;
}
int main()
{
	complex c1(5,3),c2(10,5),c3;
	c3=c1+c2;
	c3.display();
}