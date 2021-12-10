#include<stdio.h>
#include<stdlib.h>
 struct Stack{
	 int size;
	 int top;
	 int *s;
 };
 void create(struct Stack *st){
	 printf("Enter the size");
	 scanf("%d",&st->size);
	 st->top=-1;
	 st->s=(int *)malloc(st->size*sizeof(int));
 }
 void Display(struct Stack *st){
	 int i;
	 for(i=st->top;i>=0;i--)
	 printf("%d",st->s[i]);
	 printf("\n");
 }
 void push(struct Stack *st,int x){
	 if(st->top==st->size-1)
	 printf("Stack overFlow\n");
	 else{
		 st->top++;
		 st->s[st->top]=x;
	 }
 }
 int pop(struct Stack *st){
	 int x=-1;
	 if(st->top==-1)
	 printf("Stack underFlow");
	 else{
		 x=st->s[st->top--];
	 }
	 return x;
 }
 int main(){
	 struct Stack st;
	 create(&st);

	 push(&st,10);
	 push(&st,20);
	 push(&st,300);
	 push(&st,40);
	 Display(st);
	 return 0;
 }