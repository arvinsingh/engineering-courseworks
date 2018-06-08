//Sum of Digits of a number-Without Loop
#include<stdio.h>
int main(void)
{
	int u,v,w,x,y,n,s=0;

	printf("Enter a number: ");
	scanf("%d",&n);
	u=n%10;
	n=n/10;
	v=n%10;
	n=n/10;
	w=n%10;
	n=n/10;
	x=n%10;
	n=n/10;
	y=n%10;
	s=u+v+w+x+y;
	printf("Sum of Digits of Entered Number is %d",s);
}
