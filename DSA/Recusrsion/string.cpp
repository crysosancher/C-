#include<bits/stdc++.h>
using namespace std;
int main(){
	string n;
	int i,j,c=0;
	cout<<"ENter the string to check\n";
	getline(cin,n);
	for(i=0,j=n.length()-1;i<j;i++,j--){
		//cout<<"n[i]="<<n[i]<<"\n"<<"n[j]="<<n[j]<<"\n";
		if(n[i]==n[j]){

		}else{
			c++;
		}
	}
	if(c!=0){
		cout<<"Not an palindrome";
	}else{
		cout<<"Palindrome";
	}
	return 0;

}