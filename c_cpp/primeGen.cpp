#include<stdio.h>
int main()
{
int num,i=2,j,c;

printf("Generate Prime numbers upto: ");
scanf("%d",&num);
printf("Prime Numbers upto %d :\n \n",num);

while(i<=num)
{
c=0;
for(j=2;j<i;j++)
{
if(i%j==0)
c++;
}
if(c==0)
printf("%d ",i);
i++;
}
printf("\n\n");
}
