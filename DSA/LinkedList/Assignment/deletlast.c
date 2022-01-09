#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node*next;
};
struct Node*insertend(struct Node *headref,int value){
	struct Node *t = (struct Node *)malloc(sizeof(struct Node));
	t->data = value;
	t->next=NULL;
	if (headref == NULL){
	return t;
	}
	struct Node *current = (struct Node *)malloc(sizeof(struct Node));
	current=headref;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next=t;
	return headref;
}
struct Node*deleteLast(struct Node *headref){
	struct Node *current = (struct Node *)malloc(sizeof(struct Node));
	current=headref;
	while(current->next->next!=NULL){//twist
	current=current->next;
	}
	current->next=NULL;
	return headref;

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
	head=insertend(head,30);
	head=insertend(head,20);
	head=insertend(head,10);
	printf("Before Deleting Last one \n");
	display(head);
	printf("\n");
	head=deleteLast(head);
	printf("After deleting Last one \n");
	display(head);
	return 0;

}
