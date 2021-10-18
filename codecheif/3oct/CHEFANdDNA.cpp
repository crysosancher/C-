/*After failing in Computer Science Chef decided to pursue a career in Genetic Engineering. On his first day of work Chef's senior gave him a problem to solve on DNA sequences. The problem is as follows:

Each DNA sequences is composed of nucleotides 'A', 'C', 'G', 'T'.
Each DNA sequence consists of repeated sub-sequences.
Given a DNA sequence D, Chef has to identify all the 10 letter long subsequences that occur more than once in D.*/
/*Sample Input 1 
2
AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT
AAAAAAAAAAAAA*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	int arr[100],i;
	cin>>n;//no. of time take input
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Done";

	return 0;
}