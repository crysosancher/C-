#include<iostream>
using namespace std;
int factorial(int n) {
    int factorial = 1;
    for (int i = 2; i <= n; i++)
        factorial = factorial * i;
    return factorial;
}
int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}
int main(){
	int n;
	cin>>n;
	while(n--){
		int s;
		int sum=0;
		cin>>s;//for value(8,4);
		int a;//combination value
		a=2*s+1;
		for(int i=1;i<=s;i++){
			sum=sum+nCr(a-i,s);
			

		}
		cout<<sum<<endl;
	}
}