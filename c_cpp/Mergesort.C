//Merge sort
#include <stdio.h>
#include <string.h>
int len;
//Sorting in non decreasing order

void printArray(int arr[], int i, int j)
{
    printf("[");

    for (int start = i; start < j; start++)
        printf("%d, ", arr[start]);

    printf("%d]", arr[j]);
}
void merge(int arr[], int i, int mid, int j)
{
    printf("Left: ");
    printArray(arr, i, mid);
    printf(" Right: ");
    printArray(arr, mid + 1, j);
    printf("\n");
    int temp[len];
    int l = i;
    int r = j;
    int m = mid + 1;
    int k = l;

    while(l <= mid && m <= r)
	{
        if(arr[l] <= arr[m]) {
            temp[k++] = arr[l++];
        }
        else {
            temp[k++] = arr[m++];
        }
    }

    while(l <= mid)
        temp[k++] = arr[l++];

    while(m <= r)
        temp[k++] = arr[m++];

    for(int i1 = i; i1 <= j; i1++)
        arr[i1] = temp[i1];
    printf("After Merge: ");
    printArray(arr, i, j);
    printf("\n");
}
void mergesort(int arr[], int i, int j)
{
    int mid = 0;

    if(i < j)
	{
        mid = (i + j) / 2;
        mergesort(arr, i, mid);
        mergesort(arr, mid + 1, j);
        merge(arr, i, mid, j);
    }
}
int main()
{
    int arr[] = {9, 4, 8, 3, 1, 2, 5};
    len = sizeof(arr) / sizeof(int);

    printf("Initial Array: ");
    printArray(arr, 0, len - 1);
    printf("\n");
    mergesort(arr, 0, len - 1);
    return 0;
}
