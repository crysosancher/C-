#include<iostream>
using namespace std;
struct Node{
	int key;
	Node *left;
	Node *right;
	Node(int k){
		key=k;
		left=right=NULL;
	}
};
int main(){
	Node *raw=new Node(10);
	raw->left=new Node(20);
	raw->right=new Node(30);
	raw->left->left=new Node(40);
	cout<<raw;
}