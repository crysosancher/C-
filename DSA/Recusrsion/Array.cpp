#include<bits/stdc++.h>
using namespace std;
struct Array{
	int A[10];
	int size;
	int length;
};
void Display(struct Array arr){
	int i;
	printf("\n Elemets are \n");
	for(i=0;i<arr.length;i++){
		printf("%d ",arr.A[i]);
	}
}
void append(struct Array *arr,int X){
	if(arr->length<arr->size)
	arr->A[arr->length++]=X;
}
void Insert(struct Array *arr,int index,int value){
	if(index>=0 && index<=arr->length){
		for(int i=arr->length;i>index;i--){
			arr->A[i]=arr->A[i-1];
		}
		arr->A[index]=value;
		arr->length++;
	}

}
int main(){
	struct Array arr={{2,3,4,5,6},10,5};//structure intillised where 10 is size and 5 is length
	//append(&arr,11);
	Insert(&arr,1,45);
	Display(arr);
	return 0;
}