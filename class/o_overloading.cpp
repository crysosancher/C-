#include <iostream>
using namespace std;
class complex
{
public:
	int real;
	int img;

	complex operator +(complex c)//complex add(complex c)
	{
		complex temp;
		temp.real = real + c.real;
		temp.img = img + c.img;
		return temp;
	}
};
int main()
{
	complex c1, c2, c3;
	c1.real = 5;c1.img = 3;
	c2.real = 10;c2.img = 5;
	c3 = c1+c2;//c3 = c1.add(c)
	cout << c3.real << "+i" << c3.img << endl;
}