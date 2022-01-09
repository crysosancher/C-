#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
	Node(int d){
		data=d;
		next=NULL;
	}
	
};
struct MyStack{
	Node *head;
	int size;
	MyStack(){
		head=NULL;
		size=0;
	}
	void push(int x){
		Node *temp=new Node(x);
		temp->data=head;
		head=temp;
		size++;
	}
}