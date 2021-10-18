#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;//no.of question
	int ans[3];int q[3];
	for(int i=0;i<n;i++){
	    for(int j=0;j<3;j++){//taking question
	        cin>>q[i];
	    }
	    for(int j=0;i<3;j++){//taking ans
	        cin>>ans[3];
	    }
	}
	int temp=0;
	for (int i = 0; i < 3; i++)
	{ //sorting ans
		for (int j = i + 1; j < 3; j++)
		{
			if (ans[i] > ans[j])
			{
				temp = ans[i];
				ans[i] = ans[j];
				ans[j] = temp;
			}
		}
	}
	int temp2=0;
	for (int i = 0; i < 3; i++)
	{ //sorting question
		for (int j = i + 1; j < 3; j++)
		{
			if (q[i] > q[j])
			{
				temp2= q[i];
				q[i] = q[j];
				q[j] = temp2;
			}
		}
	}
	int f=0;
	for(int i=0;i<3;i++){
		if(q[i]==ans[i]){
			f=0;
		}else{
			f=1;
		}
	}
	if(f==0){
		cout<<"Pass";
	}else{
		cout<<"fail";
	}
	return 0;
}
