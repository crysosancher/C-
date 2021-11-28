#include<iostream>
#include<stdio.h>
using namespace std;
struct Node{
	int data;
       struct Node *next;
}*first=0;
void create(int a[],int size){
	Node *t,*last;
	first=new Node;
	first->data=a[0];
	first->next=0;
	last=first;
	for(int i=0;i<size;i++){
		t=new Node;
		t->data=a[i];
		t->next=0;
		last->next=t;
		last=t;
	}
}
void display(){
	
}