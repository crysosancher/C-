#include <bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *next;
};
void printList(node *n){
	while (n!=NULL){
		cout<<n->data <<endl;
		n=n->next;
	}
}
node* frontPush(node **head,int newData){
	node *newNode=new node();
	newNode->data=newData;
	newNode->next=*head;
	*head=newNode;
	return *head;
	

}
int main(){
	node *head=NULL;
	frontPush(&head,5);
	frontPush(&head,9);
	frontPush(&head,7);
	frontPush(&head,8);
	printList(head);
	return 0;
}