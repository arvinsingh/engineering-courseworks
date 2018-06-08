#include<stdio.h>
#include<conio.h>


void quicksort(int array[], int firstIndex, int lastIndex)
{
    int pivotIndex, temp, index1, index2;

    if(firstIndex < lastIndex)
    {
        pivotIndex = firstIndex;
        index1 = firstIndex;
        index2 = lastIndex;

        while(index1 < index2)
        {
            while(array[index1] <= array[pivotIndex] && index1 < lastIndex)
            {
                index1++;
            }
            while(array[index2]>array[pivotIndex])
            {
                index2--;
            }

            if(index1<index2)
            {
                temp = array[index1];
                array[index1] = array[index2];
                array[index2] = temp;
            }
        }

        temp = array[pivotIndex];
        array[pivotIndex] = array[index2];
        array[index2] = temp;

        quicksort(array, firstIndex, index2-1);
        quicksort(array, index2+1, lastIndex);
    }
}

int main()
{
    int array[100],n,i;

    printf("Enter the number of element you want to Sort : ");
    scanf("%d",&n);
    printf("Enter Elements in the list : ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    quicksort(array,0,n-1);
    printf("Sorted elements: ");
    for(i=0;i<n;i++)
    printf(" %d",array[i]);
    return 0;
}
