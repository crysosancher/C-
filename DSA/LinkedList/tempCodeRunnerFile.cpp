#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
struct Node{
	int Data;
	struct Node *Next;
}*first=0;
//Node *first=0;
void insert(int a[],int size){
	Node *t,*last;
	first=new Node;
	first->Data=a[0];
	first->Next=NULL;
	last=first;
	for(int i=1;i<size;i++){
		t=new Node;
		t->Data=a[i];
		t->Next=0;
		last->Next=t;
		last=t;
	}
}
void display(){
	while(first){
		cout<<first->Data;
		first=first->Next;
	}
}

int main(){
	
	int a[]={1,2,3,4,5};
	insert(a,5);
	display();
	
	
	
	return 0;

}
