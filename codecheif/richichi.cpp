/*3
100 200 10
111 199 11
190 200 10
*/
#include <iostream>
using namespace std;

int main() {
	int n,i;
	cin>>n;
	int f,s,p,sol;
	for(i=0;i<n;i++){
		cin>>f>>s>>p;
		sol=s-f;
		sol=sol/p;
		cout<<sol<<endl;

	}
	return 0;
}
