// C program for insertion sort
#include <math.h>
#include <stdio.h>

/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void bubbleSort(int a[], int n)
{
   int i, j, temp;  
   for(i = 0; i < n; i++)    
    {    
      for(j = i+1; j < n; j++)    
        {    
            if(a[j] < a[i])    
            {    
                temp = a[i];    
                a[i] = a[j];    
                a[j] = temp;     
            }     
        }     
    }     
}

// A utility function to print an array of size n
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

/* Driver program to test insertion sort */
int main()
{
  //  int arr[] = { 12, 11, 13, 5, 6 };
 //   int n = sizeof(arr) / sizeof(arr[0]);
    int n;
    printf("\nEnter size of array\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("\nEnter element number %d \n",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the choice of sorting\n1.)Insertion Sort\n2.)Bubble Sort\n");
	    int choice;
	    scanf("%d",&choice);
	    if(choice==1)
	    {
	    	insertionSort(arr, n);
	    	printf("Sorted array: \n");
	    	printArray(arr, n);
	    }
	    else if(choice==2)
	    {
	    	bubbleSort(arr, n);
	    	printf("Sorted array: \n");
	    	printArray(arr, n);
	    }
	    else
	    {
	    	printf("Invalid choice");
	    }
    return 0;
}