#include<bits/stdc++.h>
using namespace std;
int main(){
	int s;
	cin>>s;//no.of stocks
	int m[s];
	for(int i=0;i<s;i++){
		cin>>m[i];//storing stocks price and day;
	}
	int nc,c;
	cin>>nc;//no. of coustomer
	for(int i=0;i<nc;i++){
		cin>>c;//storing coustomer with price
		int pos=-1;
		for(int j=0;j<s;j++){
			if(c==m[j]){
				pos=j;
			}
		}
		if(pos!=-1){
			cout<<pos+1;
		}
		else{
			cout<<-1;
		}	
	}
	return 0;

}