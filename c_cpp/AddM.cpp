#include <stdio.h>
 
int main()
{
   int m, n, c, d, A[10][10], B[10][10], S[10][10];
   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &m, &n);
   printf("Enter the elements of first matrix\n");
 
   for (c = 0; c < m; c++)
      for (d = 0; d < n; d++)
         scanf("%d", &A[c][d]);
 
   printf("Enter the elements of second matrix\n");
 
   for (c = 0; c < m; c++)
      for (d = 0 ; d < n; d++)
            scanf("%d", &B[c][d]);
 
   printf("Sum of entered matrices:-\n");
 
   for (c = 0; c < m; c++) {
      for (d = 0 ; d < n; d++) {
         S[c][d] = A[c][d] + B[c][d];
         printf("%d\t", S[c][d]);
      }
      printf("\n");
   }
 
   return 0;
}
