#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int len;

void printArray(int arr[])
{
    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

void swap(int arr[], int k, int small)
{
    int temp;
    temp = arr[k];
    arr[k] = arr[small];
    arr[small] = temp;
}

int partition(int arr[], int i, int j)
{
    int pivot = arr[j];
    int small = i - 1;

    for(int k = i; k < j; k++) {
        if(arr[k] <= pivot) {
            small++;
            swap(arr, k, small);
        }
    }

    swap(arr, j, small + 1);
    printf("Pivot = %d \n", arr[small + 1]);;
    printArray(arr);
    return small + 1;
}

void quickSort(int arr[], int i, int j)
{
    if(i < j) {
        int pos = partition(arr, i, j);
        quickSort(arr, i, pos - 1);
        quickSort(arr, pos + 1, j);
    }
}

int main()
{
    int i, arr[] = {9, 4, 8, 3, 1, 2, 5};
    len = sizeof(arr) / sizeof(int);

    printf("Initial Array : ");
    printArray(arr);
    quickSort(arr, 0, len - 1);
    return 0;
}
