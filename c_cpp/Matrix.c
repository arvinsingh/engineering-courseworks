 # include<stdio.h>

       void display(int [][3]);
       void main()
       {
           int c;
           void add();
           void sub();
           void mult();
           void tran();
           
           do
           {
		   
           printf("\n Matrix Addition            : 1");
           printf("\n Matrix Subtraction         : 2");
           printf("\n Matrix Multiplication      : 3");
           printf("\n Find Transpose Matrix      : 4");
           printf("\n For Exit                   : 5");
           printf("\n Enter Your Choice          : ");
           scanf("%d",&c);
           switch(c)
           {
               case 1:
                   add();
                   break;
               case 2:
                   sub();
                   break;
               case 3:
                   mult();
                   break;
               case 4:
                   tran();
                   break;
               case 5:
               	   break;
               default:
                   printf("\nInvalid Choice");
           }
       }while(c!=5);
           getch();
       }
       void add()
       {
       	   int i,j;
           int x[3][3],y[3][3],z[3][3];
           void getmatrix(int [][3]);

           getmatrix(x);
           getmatrix(y);
           
           for(i=0;i<3;i++)
           {      for(j=0;j<3;j++)
                   z[i][j]=x[i][j]+y[i][j];
           }
           
           printf("\n - : Matrix 1: - \n");
           display(x);
           printf("\n - : Matrix 2: - \n");
           display(y);
           printf("\n - : Matrix Addition (Result): - \n");
           display(z);
       }
       void getmatrix(int t[][3])
       {
           int i,j;
           for(i=0;i<3;i++)
           {
               for(j=0;j<3;j++)
               {
                   printf("Enter element [%d][%d] : ",i,j);
                   scanf("%d",&t[i][j]);
               }
           }
       }
       void sub()
       {
    	   int i,j;
           int x[3][3],y[3][3],z[3][3];
           void getmatrix(int [][3]);

           getmatrix(x);
           getmatrix(y);
           
           for(i=0;i<3;i++)
           {
               for(j=0;j<3;j++)
                   z[i][j]=x[i][j]-y[i][j];
           }
           printf("\n - : Matrix 1: - \n");
           display(x);
           printf("\n - : Matrix 2: - \n");
           display(y);
           printf("\n - : Matrix Subtraction (Result): - \n");
           display(z);
       }

       void mult()
       {
       	   int i,j,k;
           int x[3][3],y[3][3],z[3][3];
           void getmatrix(int [][3]);
           void multiplication(int [][3],int [][3],int [][3]);

           getmatrix(x);
           getmatrix(y);
           
           for(i=0;i<3;i++)
           {
               for(j=0;j<3;j++)
				{
                   z[i][j]=0;
                   for(k=0;k<3;k++)
                       z[i][j]=z[i][j]+(x[i][j]*y[j][k]);
               }
           }
           printf("\n - : Matrix 1: - \n");
           display(x);
           printf("\n - : Matrix 2: - \n");
           display(y);
           printf("\n - : Matrix Multiplication (Result): - \n");
           display(z);
       }

       void tran()
       {
       	   int i,j;
           int x[3][3],y[3][3];
           void getmatrix(int [][3]);

           getmatrix(x);
           for(i=0;i<3;i++)
           {
               for(j=0;j<3;j++)
                   y[i][j]=x[j][i];
           }
           printf("\n - : Matrix 1: - \n");
           display(x);
           printf("\n - : Transpose Matrix : - \n");
           display(y);
       }
    
       void display(int m[][3])
       {
           int i,j;
           printf("\n\n");
           for(i=0;i<3;i++)
           {
               for(j=0;j<3;j++)
                   printf("%d  ",m[i][j]);
               printf("\n");
           }
       }
