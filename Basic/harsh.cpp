#include<bits/stdc++.h>
using namespace std;

int main(){
	
		int t,n,i;
		unsigned long long fact = 1;
		cin>>t;
		for(i=0;i<t;i++){
			cin>>n;
			for(int j=n;j>=1;j--){
				fact = fact*j;
			}
			cout<<fact<<endl;
			fact=1;
		}
	return 0;
}