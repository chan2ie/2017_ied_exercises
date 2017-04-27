#include <stdio.h>
int main() {
	int a;
	printf("Input: ");
	scanf("%d", &a);
	((a % 2) == 0) ? printf("%d is even number.\n", a) : printf("%d is odd nuber.\n", a);

	return 0;
}
