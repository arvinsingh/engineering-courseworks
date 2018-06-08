#include <stdio.h>

void main()
{
	register int a=0, *pt1;
	pt1=a;
	printf("location of x is 0x%5.5p",pt1);
}
