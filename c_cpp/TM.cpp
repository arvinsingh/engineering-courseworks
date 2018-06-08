#include <stdio.h>
 
int main()
{
   int r, s, c, d, m[10][10], t[10][10];

   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &r, &s);
 
   printf("Enter the elements of matrix\n");
 
   for (c = 0; c < r; c++)
      for(d = 0; d < s; d++)
         scanf("%d",&m[c][d]);
 
   for (c = 0; c < r; c++)
      for( d = 0 ; d < s ; d++ )
         t[d][c] = m[c][d];
 
   printf("Transpose of entered matrix :-\n");
 
   for (c = 0; c < s; c++) 
   {
		for (d = 0; d < r; d++)
         printf("%d\t",t[c][d]);
      printf("\n");
	}
 
   return 0;
}
