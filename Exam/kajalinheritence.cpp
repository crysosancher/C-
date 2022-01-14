/*
Design the following class
hierarchy of an educational institution.

a)     
Class Staff (name, code).

b)     
Class Officer (grade), subclass of Staff.

c)     
Class Teacher (subject), subclass of Staff.

d)    
Class Typist (speed), subclass of Staff.

e)     
Class CasualTypist (daily wages), subclass Typist.

f)      
Class RegularTypist (remuneration), subclass of Typist.

Create different objects of each class except Staff,
input values for different variables for each one, store these objects using
array.
*/
#include <bits/stdc++.h>
using namespace std;
class staff
{
public:
	int name;
	int code;
};
class Officer : public staff
{
public:
	char grade;
};
class Teacher : public staff
{
public:
	string subject;
};
class Typist : public staff
{
public:
	int speed;
};
class CasualTypist : public Typist
{
public:
	int dailywages;
};
class RegularTypist : public Typist
{
public:
	int remuneration;
};
int main()
{
	Officer o;
	o.grade = 'A';
	Teacher t;
	t.subject="C++";
	Typist ty;
	ty.speed=50;
	CasualTypist ct;
	ct.dailywages=1000;
	RegularTypist rt;
	rt.remuneration=2000;
	staff a[5];
	a[0]=o;
	a[1]=t;
	a[2]=ty;
	a[3]=ct;
	a[4]=rt;
	return 0;
}