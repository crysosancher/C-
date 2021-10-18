//Program to convert a 2 dimensional matrix into a single diamensional array
#include<bits/stdc++.h>
using namespace std;
void set(int a[],int i,int j,int x){
	if(i==j){
		a[i-1]=x;
	}
}
int get(int a[],int i,int j){
	if(i==j){
		return a[i-1];
	}else{
		return 0;
	}
}
int main(){
	
	return 0;
	
}
