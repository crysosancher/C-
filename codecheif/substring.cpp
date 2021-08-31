#include<bits/stdc++.h>
using namespace std;
int Is_Possible(int N,int K,string S){
	int c=0;
	for(int i=0;i<N;i++){
		if(i+K>N|| S[i]=='0'){
			continue;
		}
		for(int j=i,c=0;j<N&&c<K;j++,c++){
			if(S[j]=='1'){
				S[j]='0';
			}else{
				S[j]='1';
			}
			//cout<<S[j];
		}
	}
	for(int i=0;i<N;i++){
		if(S[i]=='1'){
			return 0;
		}
	}
	return 1;

}
int main(){
	// #ifndef ONLINE_JUDJE
	// 	freopen("input.txt","r+",stdin);
	// 	freopen("output.txt","w+",stdout);
	// #endif
		cout<<Is_Possible(5,3,"10110");
		//Is_Possible(5,3,"11010");
return 0;
}