#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node*next;
};
struct Node*insertBegin(struct Node *headref,int value){
	struct Node *t=(struct Node*)malloc(sizeof(struct Node));
	t->data=value;
	t->next=headref;
	return t;	
}
void display(struct Node *headref){
	struct Node *ptr=headref;
	while(ptr!=NULL){
		printf("%d ",ptr->data);
		ptr=ptr->next;

	}

}
int main(){
	struct Node *head=(struct Node*)malloc(sizeof(struct Node));//head pointer
	head=NULL;
	head=insertBegin(head,30);
	head=insertBegin(head,20);
	head=insertBegin(head,10);
	display(head);
	return 0;

}
