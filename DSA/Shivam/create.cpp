#include<iostream>
using namespace std;
struct Node{
	int Data;
	struct Node *Next;
}*first=0;
void create(int arr[],int size){
	Node *t,*last;
	Node *gandu=new Node;
	gandu->Data=arr[0];
	gandu->Next=0;
	first=gandu;
	last=gandu;
	for(int i=1;i<size;i++){
		t=new Node;
		t->Data=arr[i];
		t->Next=0;
		last->Next=t;
		last=t;
	}

}
void Display(){
	Node *t=first;
	while(t){
		cout<<t->Data<<" ";
		t=t->Next;
	}
}
void reverse(Node *t){
	Node *f,*s;
	f=0;
	s=0;
	while(t){
		s=f;
		f=t;
		t=t->Next;
		f->Next=s;
	}
	first=f;
	Display();
}
void insertAtFirst(){
	Node *l=new Node;
	l->Data=78;
	l->Next=first;
	first=l;
}
void insertAtLast(){
	Node *l=new Node;
	l->Data=99;
	l->Next=0;
	Node *y=first;
	while(y->Next!=0){
		y=y->Next;
	}
	y->Next=l;
}
void insertatMid(){

}
void nodeCount(){
	Node *c=first;
	int k=0;
	while(c){
		c=c->Next;
		k++;
	}
	cout<<"here are "<<k<<" Nodes";
}


int main()
{
	struct Node *temp;
	int A[] = {1, 2, 3, 4, 5, 6, 7, 8};
	create(A, 8);
	//insertAtFirst();
	//insertAtLast();
	//insertatMid();
	nodeCount();
	Display();
	//reverse(first);
	
	return 0;
}