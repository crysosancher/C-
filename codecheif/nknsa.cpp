#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes herei
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int j=0,k=0;
	    long long int a[n],b[n],c[n];
	    for(long long int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]%2==0)
	        {
	            b[j++]=a[i];
	        }
	        else
	        {
	            c[k++]=a[i];
	        }
	    }
	  long long int i=0;
	    for(i=0;i<j;i++)
	    {
	        cout<<b[i]<<" "; 
	    }
	    for(i=0;i<k;i++)
	    {
	        cout<<c[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}