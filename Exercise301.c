#include <stdio.h>

int main(void) {
	int int1, int2;

	printf("Input two integer: ");
	scanf("%d%d",&int1, &int2);
	printf("%d / %d is %d with a reminder of %d\n",int1, int2, int1 / int2, int1 % int2);

	return 0;
}
