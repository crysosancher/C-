/* Write a program which takes input as an array of numbers between 2 to 99, and print only those numbers which are prime and at the prime index(both position and number are prime). For example if input array is [4,5,2,8,9, 19,6, 12], it should print:<2 - at index 2, 19 - at index 5.> If array contains number outside 2-99 it should say invalid input. Javascript is preferred, but you can use any other language as well. Please note this is NOT program just to find prime number from array(so exact program will not be available in Google) */
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
	// Corner case
	if (n <= 1)
		return false;

	// Check from 2 to n-1
	for (int i = 2; i <n; i++)
		if (n % i == 0)
			return false;

	return true;
}
int main()
{
	int s;
	cin >> s;
	int arr[s];
	for(int i=0;i<s;i++){
		cin>>arr[i];
		if(arr[i]<2 || arr[i]>99)
		cout<<"invalid input"<<arr[i]<<"\n";
		if(isPrime(i)&&isPrime(arr[i])){
			cout<<arr[i]<<"-at index "<<i<<"\t";
		}
	}

	
	return 0;
}