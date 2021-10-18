#include<bits/stdc++.h>
using namespace std;
class Student{
	public:
	int roll;
	string name;
	static int addNo;
	Student(string n){
		addNo++;
		roll=addNo;
		name=n;
	}
	void display(){
		cout<<"\nName="<<name<<"\t "<<"roll No.="<<roll;
	}
};
int Student::addNo=0;
int main(){
	Student s1("Jhony");
	Student s2("ava");
	Student s3("kris");
	Student s4("niccoli");
	Student s5("brandi");
	s1.display();
	s4.display();
	cout<<"\nTOtal no. of admission="<<Student::addNo<<endl;
                                        //s5 or any class object could have been called to use add no. 
}