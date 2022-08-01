#include <iostream>
using namespace std;
void slectionSort(int a[], int n)
{
	int i, j, k;
	for (i = 0; i < n - 1; i++)
	{
		for (j = k = i; j < n; j++)
		{
			if (a[j] < a[k])
				k = j;
		}
		swap(a[i], a[k]);
	}
}

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	int A[] = {3, 7, 2, 1, 5, 4};
	slectionSort(A, 6);
	for (int i = 0; i < 6; i++)
	{
		cout << A[i] << " "
		     << "\n";
	}
	return 0;
}