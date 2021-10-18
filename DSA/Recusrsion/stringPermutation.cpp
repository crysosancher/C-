#include<bits/stdc++.h>
using namespace std;
void permutation(string f,int l,int r){
	if(l==r){
		cout<<f;
	}else{
	for(int i=l;i<r;i++){
		cout<<",";
	 swap(f[l], f[i]);
	  permutation(f, l+1, r);
	  swap(f[i],f[l]);
	  ;
	}
}
}
int main(){
string a="abc";
int n=a.length();
permutation(a,0,n);
return 0;
}