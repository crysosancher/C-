#include<iostream>
#include<stdio.h>
using namespace std;
struct Node
{
int data;
struct Node *next;
};
Node *first=0;//used for pointing first 
void create(int a[],int size){
	Node *t,*last;
	first=new Node;
	first->data=a[0];
	first->next=0;
	last=first;
	for(int i=1;i<size;i++){
		t=new Node;
		t->data=a[i];
		t->next=0;
		last->next=t;//making connection
		last=t;//shifting last to the last node
	}
}
void insert(){
	
}
void display(){
	while(first){
		cout<<first->data;
		first=first->next;
	}
}
int main(){
	int a[]={1,2,3};
	create(a,3);
	display();
	return 0;

}

