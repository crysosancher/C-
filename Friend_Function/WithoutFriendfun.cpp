#include <bits/stdc++.h>
using namespace std;
class test
{
	int c; //private;
public:
	int a;

protected:
	int b;
	//Private:
};
void fun()
{
	test f;
	//f.c = 25;
	f.a = 56;//Hence we can only access public member funtion from object
	cout<<f.a;
	//f.b = 69;
	
	//return 0;
}
int main(){
	fun();
}