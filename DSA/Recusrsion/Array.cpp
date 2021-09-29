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
void Delete(struct Array *arr,int index){
	if(index>=0 && index<arr->length){
	for(int i=index;i<arr->length-1;i++){
		arr->A[i]=arr->A[i+1];
	}
	arr->length--;

}}
void swap(int *x,int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int linerSearch(struct Array *arr,int key){
	for(int i=0;i<arr->length;i++){
		if(arr->A[i]==key){
			cout<<"Found at = ";
			swap(&arr->A[i],&arr->A[i-1]);//transporting
			return i;
		}	
	}
	cout<<"Not found ";
	return -1;
}
int BinarySearch(struct Array arr,int key){
	int high,low,mid;
	high=arr.length-1;
	low=0;
	while(high>=low){
	mid=(high+low)/2;
	if(arr.A[mid]==key)
	return mid;
	else if(arr.A[mid]<key){
		low=mid+1;
	}else{
		high=mid-1;
	}
}
return -1;
}
void Reverse(struct Array *arr){
	for(int i=0,j=arr->length-1;i<j;i++,j--){
		int temp=arr->A[i];
		arr->A[i]=arr->A[j];
		arr->A[j]=temp;
	}
}
void leftShift(struct Array *arr){
	for(int i=0;i<arr->length;i++){
		arr->A[i]=arr->A[i+1];
	}
	arr->A[arr->length-1]=0;
}
void insertSort(struct Array *arr,int number){
	int i=arr->length-1;
	if(arr->length==arr->size)
	return;
	while(i>0 && arr->A[i]>number){
		arr->A[i+1]=arr->A[i];
		i--;

	}
	arr->A[i+1]=number;
	arr->length++;


}
int *mergeTwoArray(struct Array arr,struct Array arr2){
	int i=0,j=0,k=0;
	int *arr3=new int[arr.length+arr2.length];
	while(i<arr.length && j<arr2.length){
		if(arr.A[i]<arr2.A[j])
		arr3[k++]=arr.A[i++];
                else
		arr3[k++]=arr2.A[j++];  

	}
	for(;i<arr.length;i++)
	arr3[k++]=arr.A[i];
	for(;j<arr2.length;j++)
	arr3[k++]=arr2.A[j];
	return arr3;

}

int main(){
	struct Array arr={{2,3,5,6},10,4};//structure intillised where 10 is size and 5 is length
	struct Array arr2={{7,8,11,12},10,4};//structure intillised where 10 is size and 5 is length
	//append(&arr,11);
	//Insert(&arr,1,65);
	//Delete(&arr,5);
	//cout<<linerSearch(&arr,6);
	//cout<<BinarySearch(arr,65);
	//Reverse(&arr);
	//leftShift(&arr);
	//insertSort(&arr,4);
        int *n=mergeTwoArray(arr,arr2);
	for(int i=0;i<8;i++){
		cout<<n[i]<<endl;

	}

	//Display(arr);
	return 0;
}