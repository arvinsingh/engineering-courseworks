#include <stdio.h>
 
int swapValue(int, int);
int swapReference(int*, int*);
 
int main()
{
   int x, y, c;

 	do
 	{
   printf("\nEnter the value of x and y\n");
   scanf("%d%d",&x,&y);
   
    printf("1-- To Swap Using Call by Value\n");
	printf("2-- To Swap Using Call by Reference\n");
	printf("0-- Exit\n");
	printf("CHOICE: ");
	scanf("%d",&c);
	printf("Before Swapping\nx = %d\ny = %d\n", x, y);	
	switch(c)
	{
	case(1):
		swapValue(x,y);
		break;
	case(2):
		swapReference(&x,&y);
	case(0):
		break;
	default:
		printf("Invalid Choice");
		break; 
	}
 
   printf("After Swapping\nx = %d\ny = %d\n", x, y);
	}while(c!=0);
   return 0;
}

int swapValue( int x, int y )
{ 
    int t ;
    t = x ;
    x = y ;
    y = t ;
}
 
int swapReference(int *a, int *b)
{
   int temp;
   
   temp = *b;
   *b = *a;
   *a = temp;
}
