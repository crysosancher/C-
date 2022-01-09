#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node*next;
};
void diplay(struct Node* head){
	struct Node *ptr=head;
	while(ptr!=NULL){
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
}
int main()
{
	struct Node *t=(struct Node*)malloc(sizeof(struct Node));//head pointer
	struct Node *t1=(struct Node*)malloc(sizeof(struct Node));//creating a node
	t->data=10;
	t->next=t1;
	t1->data=20;
	t1->next=NULL;
	diplay(t);
	return 0;
}
