#include<iostream>
using namespace std;
struct Queue{
int size,cap;
int *arr;
Queue(int c){
	cap=c;
	size=0;
	arr=new int[cap];
}
bool isFull(){
	return (size==cap);
}
bool isEmpty(){
	return (size==0);
}
void enque(int x){
	if(isFull())return;
	arr[size]=x;
	size++;
}
void deque(){
	if(isEmpty())return;
	for(int i=0;i<size-1;i++)
		arr[i]=arr[i+1];
	size --;	
}
int getFront(){
	if(isEmpty())
	return -1;
	else
	return 0;
}
int getRear(){
	if(isEmpty())
	return -1;
	else
	return size-1;
}
void display(int array[]){
	for(int i=0;i<size;i++){
		cout<<array[i]<<" ";
	}
}
};
int main(){
	Queue q(3);
	q.enque(10);
	q.enque(20);
	q.enque(30);
	q.deque();
	q.display(q.arr);
	cout<<"\n"<<q.arr[q.getFront()];
	cout<<"\n"<<q.arr[q.getRear()];
	return 0;

}