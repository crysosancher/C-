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
		cout<<t->Data;
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
void insertAtFirst(Node *t){
	
}


int main()
{
	struct Node *temp;
	int A[] = {1, 2, 3, 4, 5, 6, 7, 8};
	create(A, 8);
	//Display();
	//reverse(first);
	
	return 0;
}