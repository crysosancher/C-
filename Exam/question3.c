// Write a single C program that will sort an array using insertion sort and bubble sort.
#include <math.h>
#include <stdio.h>

void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}
void bubbleSort(int a[], int n)
{
	int i, j, temp;
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[j] < a[i])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
int main()
{
	int n, opt;
	printf("\nEnter size of array\n");
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		printf("\nEnter element number %d \n", i + 1);
		scanf("%d", &arr[i]);
	}
	do
	{
		printf("Enter the choice of sorting\n1.)Insertion Sort\n2.)Bubble Sort\n3.)Exit\n");
		scanf("%d", &opt);
		switch (opt)
		{
		case 1:
			insertionSort(arr, n);
			printf("Intersation Sorted array: \n");
			printArray(arr, n);
			break;
		case 2:
			bubbleSort(arr, n);
			printf("Bubble Sorted array: \n");
			printArray(arr, n);
			break;
		}

	} while (opt != 3);
	printf("Exited SuccessFully");
	return 0;
}