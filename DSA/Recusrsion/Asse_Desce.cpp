#include<bits/stdc++.h>
using namespace std;
void fun1(int n){
	if(n>0){
		cout<<n<<"\n";
		fun1(n-1);
	}
}
void fun2(int n){
	if(n>0){
		fun2(n-1);
		cout<<n<<endl;
	}
}
int main(){
	int x=3;
	fun1(x);//calling time printing (aSSending)
	fun2(x);//returning time printing (Descending Phase)
}