#include <stdio.h>

int plus(int,int);

int main()
{
	int a, b;

	printf("Input first number : ");
	scanf("%d",&a);
	printf("Input second number : ");
	scanf("%d",&b);

	printf("%d + %d = %d\n",a,b,plus(a,b));
	return 0;
}

int plus(int a, int b)
{
	return a+b;
}

