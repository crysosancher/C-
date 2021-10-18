#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	long long int a[n];
	for(long long int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
    int q;
    cin>>q;
    while(q--)
    {
        long long int c;
        cin>>c;
        int pos=-1;
        for(long long int i=0;i<n;i++)
        {
            if(a[i]==c)
            {
                pos=i;
            }
        }
        if(pos==-1)
        cout<<-1<<endl;
        else
        {
             cout<<pos+1<<endl;
             a[pos]=-1;
        }
    }
	return 0;
}