//input:
/*3 4
 160 144 245 654
 457 123 642 456
 254 754 984 214*/
// output
// 654 642 984
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n1, n2, m[100][100],n[100],max=0;
	cin >> n1 >> n2;
	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < n2; j++)
		{
			cin >> m[i][j];
		}
	}
	for (int i = 0; i <n1;i++){
		for(int j=0;j<n2;j++){
			//cout<<m[i][j]<<"\t";
			if(m[i][j]>=max){
				max=m[i][j];
			}
			
		}
		cout<<"\n";
		n[i]=max;
		max=0;
	}
	for(int i=0;i<n1;i++){
		cout<<n[i]<<" ";
	}
	return 0;
}