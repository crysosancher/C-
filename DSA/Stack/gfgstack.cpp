#include<iostream>
using namespace std;
struct MyStack{
	int *arr;int cap;
	int top;
	MyStack(int c){//constructor
		cap=c;
		arr=new int[cap];
		top=-1;
	}
	void push(int x){
		top++;
		arr[top]=x;
	}
	int pop(){
		int res=arr[top];
		top--;
		return res;
	}
	int peek(){
		return arr[top];
	}
	int size(){
		return (top+1);
	}
	bool isEmpty(){
		return (top==-1);
	}
	void display(){
	int k=top;
	for(k;k>-1;k--){
		cout<<arr[k];
	}	
	}
};
int main(){
	MyStack s(5);
	s.push(5);
	s.push(6);
	s.push(7);
	s.push(8);
	//cout<<s.peek();
	s.display();
	cout<<"\n";
	cout<<s.isEmpty();
}