#include<bits/stdc++.h>
using namespace std;
int main(){
	void compareTriplets(int x[], int y[]);//function sign
	int arr1[3],arr2[3];
	for(int i=0;i<3;i++){
		cin>>arr1[i];
	}
	for(int i=0;i<3;i++){
		cin>>arr2[i];
	}
	compareTriplets(arr1,arr2);
	return 0;
}
void compareTriplets(int a[], int b[]) {
	int as=0;
        int bs=0;
    for(int i=0;i<3;i++){
        if(a[i]>b[i]){
            as++;
        }else if(a[i]<b[i]){
            bs++;
        }        
    }
    cout<<as<<" "<<bs;

}