#include <stdio.h>

void divideRemainder(int*a,int*b);

int main()
{
	int int1, int2;

	printf("Input two Number : ");
	scanf("%d%d",&int1,&int2);
	printf("----------------------------------------\n");
	divideRemainder(&int1,&int2);
	printf("OUTPUT : divide [%d] remainder [%d]\n",int1,int2);

	return 0; 
}

void divideRemainder(int*a,int*b)
{
	int int3, int4;

	int3 = *a;
	int4 = *b;

	*a = int3/int4;
	*b = int3%int4;
}
