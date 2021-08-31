/*Sample Input
2
9876543211
12345678999
Sample Output
19876543211
102345678999*/
#include <iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main() {
	string s;
	int i;
	cin>>s;
	//for(i=0;i<sizeof(s);i++){
		if(s[0]!='1'){
			cout<<"1"<<s;
		}else{
			s[0]=char("1");
			cout<<s[0]<<"0";
		}
	//}
	//cout<<s;
	return 0;
}
