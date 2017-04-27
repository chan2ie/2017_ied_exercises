#include <stdio.h>

float avrg(int,int,int,int);
float dev(int,int,int,int,int);
int main()
{
	int a, b, c, d;
	
	printf("Enter the first number : ");
	scanf("%d",&a);
	printf("Enter the second number : ");
	scanf("%d",&b);
	printf("Enter the third number : ");
	scanf("%d",&c);
	printf("Enter the fourth number : ");
	scanf("%d",&d);
	printf("******** average is %.2f ********\n",avrg(a,b,c,d));
	printf("first number :\t%15d -- deviation :\t%15.2f\n",a,dev(a,a,b,c,d));
	printf("second number :\t%15d -- deviation :\t%15.2f\n",b,dev(b,a,b,c,d));
	printf("third number :\t%15d -- deviation :\t%15.2f\n",c,dev(c,a,b,c,d));
	printf("fourth number :\t%15d -- deviation :\t%15.2f\n",d,dev(d,a,b,c,d));
	
	return 0;
}

float avrg (int a, int b, int c, int d)
{
	return (a + b + c + d)/4.0;
}

float dev (int int1, int a, int b, int c, int d)
{
	return int1 - avrg(a,b,c,d);
}
