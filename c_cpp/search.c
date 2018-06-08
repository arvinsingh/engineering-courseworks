#include<stdio.h>
 
int main()
{
    int a[20],i,j,x,n,c,temp;

    printf("How many elements? ");
    scanf("%d",&n);
    
    printf("Enter the elements:\n");
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
         }
    }
    printf("Sorted list is: \t");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
	do
    {
    printf("\nEnter element to search: ");
    scanf("%d",&x);
    printf("\nFor Linear Search	:1\n");
    printf("For Binary Search	:2\n");
    printf("To Exit	:3\n");

    printf("Choice: ");
    scanf("%d",&c);
	switch(c)
	{
		case 1:
			linearSearch(a,x,n);
			break;
			
		case 2:
			binarySearch(a,x,n);
			break;
		case 3:
			break;
		default:
			printf("Invalid Choice");
			break;
	}
	}while(c!=3);
	return 0;
}

int linearSearch(int *a,int x,int n)
{
	int i;
    for(i=0;i<n;++i)
        if(a[i]==x)
            break;
    
    if(i<n)
    	printf("%d found at location %d.\n\n", x,++i);
    else
        printf("Element not found");
 	return 0;
}
 
int binarySearch(int *a, int x, int n)
{
   int first, last, middle;

   first = 0;
   last = n - 1;
   middle = (first+last)/2;
 
   while (first <= last) {
      if (a[middle] < x)
         first = middle + 1;    
      else if (a[middle] == x) {
         printf("%d found at location %d.\n\n", x, middle+1);
         break;
      }
      else
         last = middle - 1;
 
      middle = (first + last)/2;
   }
   if (first > last)
      printf("Not found! %d is not present in the list.\n", x);
 
   return 0;   
}

