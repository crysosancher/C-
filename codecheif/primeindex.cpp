/* Write a program which takes input as an array of numbers between 2 to 99, and print only those numbers which are prime and at the prime index(both position and number are prime). For example if input array is [4,5,2,8,9, 19,6, 12], it should print:<2 - at index 2, 19 - at index 5.> If array contains number outside 2-99 it should say invalid input. Javascript is preferred, but you can use any other language as well. Please note this is NOT program just to find prime number from array(so exact program will not be available in Google) */
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;//size
	int arr[n];//array
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		for(int j=2;j<n;j++){
			if(!(arr[i]%j==0 && i%j==0)){
				cout<<arr[i]<<"- at index"<<i;
			}

		}
	}
	return 0;
}