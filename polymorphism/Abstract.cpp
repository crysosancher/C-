//#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class car{//As only pure virtual fun. are present its will be called as interface(abstract class)
	public:/*we can't create object of abstrcat class,but we can have pointer of the abstract class*/
	virtual void start()=0;//pure virtual function
	virtual void stop()=0;//pure virtual function
};
class inova:public car{
	public:
	void start(){
		cout<<"Innova car gets start\n";
	}
	void stop(){
		cout<<"INnova car stop\n";
	}
};
class swift:public car{
	public:
	void start(){
		cout<<"swift get started\n";
	}
	void stop(){
		cout<<"Swift get stopped \n";
	}
};
int main(){
	//car c;//we can't create object of a abstract class
	car *p;//But we can have a pointe of a abstract class
	p=new inova();/*Here we can see that we are acheiving polymorphism as just with *p we are pointing at two different object*/
	p->start();
	p=new swift();
	p->start();
	return 0;
}
