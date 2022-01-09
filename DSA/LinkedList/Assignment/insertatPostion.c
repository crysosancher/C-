#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int data;
	struct Node *next;
};
struct Node *insertend(struct Node *headref, int value)
{
	struct Node *t = (struct Node *)malloc(sizeof(struct Node));
	t->data = value;
	t->next = NULL;
	if (headref == NULL)
	{
		return t;
	}
	struct Node *current = (struct Node *)malloc(sizeof(struct Node));
	current = headref;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = t;
	return headref;
}
// struct Node *insertPar(struct Node *head, int pos, int data)
// {

// 	struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
// 	temp->data = data;
// 	temp->next = NULL;
// 	if (pos == 1)
// 	{
// 		temp->next = head;
// 		return temp;
// 	}
// 	struct Node *cur = (struct Node *)malloc(sizeof(struct Node));
// 	for (int i = 0; i <= pos - 2 && cur != NULL; i++)
// 		cur = cur->next;
// 	if (cur == NULL)
// 		return head;
// 	temp->next = cur->next;
// 	cur->next = temp;
// 	return head;
// }
struct Node *insertPar(struct Node *head, int pos, int data)
{

	struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
	temp->data = data;
	temp->next = NULL;
	if (pos == 1)
	{
		temp->next = head; 
    head=temp;
		return head;
	}
	struct Node *cur =head ;
	for (int i = 0; i <= pos - 2 && cur !=NULL;i++)
		cur = cur->next;
	if (cur == NULL)
		return head;
	temp->next = cur->next;
	cur->next = temp;
	return head;
}
void display(struct Node *headref)
{
	struct Node *ptr = headref;
	while (ptr != NULL)
	{
		printf("%d ", ptr->data);
		ptr = ptr->next;
	}
}
int main()
{
	struct Node *head = (struct Node *)malloc(sizeof(struct Node)); // head pointer
	head = NULL;
	head = insertend(head, 30);
	head = insertend(head, 20);
	head = insertend(head, 10);
	head= insertPar(head,3,40);
	display(head);
	return 0;
}