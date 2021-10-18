#include<bits/stdc++.h>
using namespace std;
int main(){
	int a=2,c;
	char e;
	int b=0;
	//cout<<b;
	try{
		if(b==0)
		throw  e;
		c=a/b;
		cout<<c;
	}
	catch(char a){
		cout<<"Can not  be divided by 0";

	}
	return 0;
}