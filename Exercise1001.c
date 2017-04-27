#include <stdio.h>

void swap(float*x,float*y);

int main()
{
	float f1, f2;

	printf("Input two Number\n\tx : ");
	scanf("%f",&f1);
	printf("\ty : ");
	scanf("%f",&f2);
	printf("--------------------------------\n");
	printf("Before : x [%.1f] y [%.1f]\n",f1,f2);

	swap(&f1,&f2);

	printf("--------------------------------\n");
	printf("Before : x [%.1f] y [%.1f]\n",f1,f2);

	//

	return 0;
}

void swap(float*x,float*y)
{
	float f3;

	f3 = *x;

	*x = *y;
	*y = f3;
}
