#include <stdio.h>

int main()
{
	int x;
	
	x=sizeof(int);
	printf("Size of int is %d\n",x);
	printf("%s\n",
		(x==2)
		? "The int datatype has 2 bytes"
		: "Int doesnt have 2 bytes.");
	printf("The maximum value of int is: %d\n",
		(x != 2)
		? ~(1 << x * 8 - 1)
		: ~(1 << 15) );
		printf("size of short int is %d %d", sizeof(short int));
	return 0;
}
