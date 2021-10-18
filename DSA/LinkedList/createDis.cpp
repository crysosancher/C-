#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
struct Node
{
	int data;
	struct Node *next;
} *first = 0;
void create(int A[], int n)
{
	int i;
	struct Node *t, *last;
	first = (struct Node *)malloc(sizeof(struct Node));
	first->data = A[0];
	first->next = 0;
	last = first;
	for (i = 1; i < n; i++)
	{
		t = (struct Node *)malloc(sizeof(struct Node));
		t->data = A[i];
		t->next = 0;
		last->next = t;
		last = t;
	}
}
void Display(struct Node *p)
{
	while (p != NULL)
	{
		printf("%d ", p->data);
		p = p->next;
	}
}
int sumFuc(struct Node *p)
{
	int s = 0;
	while (p != NULL)
	{
		s = s + p->data;
		p = p->next;
	}
	return s;
}
int rSum(struct Node *p){
	if(p==NULL)
	return 0;
	else
	return rSum(p->next)+p->data;
}
void DisplayR(struct Node *p)
{
	if (p != NULL)
	{
		printf("%d ", p->data);
		DisplayR(p->next);
	}
}
void DisplayRR(struct Node *p)
{
	if (p != NULL)
	{
		DisplayRR(p->next);
		printf("%d ", p->data);
	}
}
int count(struct Node *p){
	int l=0;
	while(p){
		l++;
		p=p->next;
	}
	return l;
}
int max(struct Node *p){
	int max=0;
	while(p){
		if(p->data>=max)
		   max=p->data;
		p=p->next;
	}
	return max;
}
void searching(struct Node *p){
	int s,flag=0;
	cout<<"\nEnter the no. to be searched\n";
	cin>>s;
	while (p)
	{
		if(p->data==s)
		flag=1;
		p=p->next;
	}
	if(flag==0)
	cout<<"No. not found";
	else
	cout<<"No. is found ";
	
}
struct Node *Isearch(struct Node *p){
	int s;
	cout<<"ENter the no. to be searched";
	cin>>s;
	struct Node *q;
	while(p){
		if(s==p->data){
			q->next=p->next;
			p->next=first;
			first=p;
			return p;
		}
		q=p;
		p=p->next;
	}
	return NULL;
}
int main()
{
	struct Node *temp;
	int A[] = {1, 2, 3, 4, 5, 6, 7, 8};
	create(A, 8);
	Display(first);
	cout << endl;
	// DisplayR(first);
	// cout << endl;
	// DisplayRR(first);
	// cout << endl;
	// cout<<sumFuc(first);
	// cout<<endl;
	// cout<<"Rsum="<<rSum(first);
	// cout<<"\nNo. of noad="<<count(first);
	// cout<<"\nMax="<<max(first);
	//searching(first);
	Isearch(first);
	Display(first);
	
	return 0;
}