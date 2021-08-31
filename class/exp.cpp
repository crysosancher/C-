#include <stdio.h>

struct Array
{
    int A[20];
    int size;
    int length;
};

void Append(struct Array *arr, int x)
{
    if (arr->length < arr->size)
    {
        arr->A[arr->length++] = x;
    }
}

void Display(struct Array arr)
{
    int i;
    printf("\n The Elements are \n");
    for (i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
}

int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 20, 5};
    Append(&arr, 10);
    Display(arr);
    return 0;
}