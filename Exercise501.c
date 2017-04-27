#include <stdio.h>

void sqr (int);
void printOne(int);

int main()
{
	int a;
	int result;
	int one;

	printf("Input : ");
	scanf("%d",&a);
	
	sqr(a);
	
	return 0;
}

void sqr (int a)
{
	int result;

	result = a*a;
	printOne(result);
}

void printOne(int result)
{
	printf("Result : %d\n",result);
}

