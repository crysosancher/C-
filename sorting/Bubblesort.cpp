#include <iostream>
using namespace std;
void Bubble(int A[], int n)
{
	int i, j, flag = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (A[j] > A[j + 1])
			{
				flag = 1;
				swap(A[j], A[j + 1]);
			}
		}
		if (flag == 0)
			break;
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
	Bubble(A, 6);
	for (int i = 0; i < 6; i++)
	{
		cout << A[i] << " "<<"\n";
	}
	return 0;
}