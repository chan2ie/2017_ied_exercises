#include <stdio.h>
float sol_x(int,int,int,int);
float sol_y(int,int,int,int);
int main()
{
	int a, b, c, d;

	printf("1st equation: y = ax - b, input 'a' and 'b'\n");
	printf("a = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);
	printf("2nd equation: y = cx - d, input 'c' and 'd'\n");
	printf("c = ");
	scanf("%d",&c);
	printf("d = ");
	scanf("%d",&d);

	printf("result:\nx is %f \ny is %f \n",sol_x(a,b,c,d),sol_y(a,b,c,d));

	return 0;
}

float sol_x (int a, int b, int c, int d)
{
	return ((float)b-(float)d)/((float)a-(float)c);
}

float sol_y(int a, int b, int c, int d)
{
	return a*sol_x(a,b,c,d)+b;
}
