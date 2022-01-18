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
void inOrder(Node *root){
	if(root==NULL)
		return;
	inOrder(root->left);
	cout<<root->key<<" ";
	inOrder(root->right);
}
int main(){
	Node *raw=new Node(10);
	raw->left=new Node(20);
	raw->right=new Node(30);
	raw->right->left=new Node(40);
	raw->right->right=new Node(50);
	inOrder(raw);
}