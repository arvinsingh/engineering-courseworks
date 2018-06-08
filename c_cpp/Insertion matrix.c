#include <stdio.h>
 
int main()
{
    int array[10];
    int i, j, n, m, temp, key, pos;

    printf("\nEnter how many elements: ");
    scanf("%d", &n);
    printf("Enter the elements \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Input array elements are: \t");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", array[i]);
    }

    printf("\nEnter the element to be inserted: ");
    scanf("%d",&key);
    printf("\nPostion where to insert: ");
    scanf("%d",&pos);
    pos=pos-1;
    if (pos != n)
    {
        m = n - pos + 1;
        for (i = 0; i <= m; i++)
        {
            array[n - i + 2] = array[n - i + 1] ;
        }
    }
    array[pos] = key;
    printf("\nFinal list is:\t");
    for (i = 0; i < n + 1; i++)
    {
        printf("%d\t", array[i]);
    }
}

