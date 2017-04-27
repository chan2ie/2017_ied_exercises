#include <stdio.h>

int main(void) {
	char num1, num2;

	scanf("%c %c",&num1, &num2);

	num1 = num1 - '0';
	num2 = num2 - '0';

	num1 = num1 * num2;
	num1 = num1 % 26 + 'A';

	printf("%c\n",num1);

	return 0;
}
