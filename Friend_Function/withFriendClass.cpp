#include<bits/stdc++.h>
using namespace std;
class Your;
class My{
	int c;//private
	public:
	int k;
	friend Your;
	protected:
	int l;

};
class Your{
	public:
	My o;
	void fun(){
	o.c=23;
	o.k=32;
	o.l=12;
	}
	void Display(){
		cout<<o.c<<endl<<o.k<<endl<<o.l<<endl;
	}

};
int main(){
	Your y;
	y.fun ();
	y.Display();
}