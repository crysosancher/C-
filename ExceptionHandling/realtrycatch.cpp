#include<bits/stdc++.h>
using namespace std;
int division(int a ,int b){
	if(b==0)
	throw char ('a');//if its throw it goes to catch block
	return a/b;//if its return it goes to c;

}
int main(){
	int a=12,b=0;
	try{
		int c=division(a,b);
		cout<<c;
	}
	catch(int e){
		cout<<"Enable to divide by zero";
	}
	catch(...){//catches all kind of error
		cout<<"pata nai sir";
	}
	return 0;
}