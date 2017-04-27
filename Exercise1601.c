#include <stdio.h>
int main(){
	int a, b, carry;

	printf("Enter 2 numbers:");
	scanf("%d%d", &a, &b);

	if (((a % 10) + (b % 10)) >= 10)//1¿ ¿¿
	{
		if (((a / 10 % 10) + (b / 10 % 10) + 1) >= 10)//10¿ ¿¿
		{
			if (((a / 100) + (b / 100) + 1) >= 10) //100¿ ¿¿
				carry = 3;
			else
				carry = 2;
		}
		else
		{
			if (((a / 100) + (b / 100)) >= 10)//100¿ ¿¿
				carry = 2;
			else
				carry = 1;
		}
	}
	else
	{
		if (((a / 10 % 10) + (b / 10 % 10) + 1) >= 10)//10¿ ¿¿
		{
			if (((a / 100) + (b / 100) + 1) >= 10) //100¿ ¿¿
				carry = 2;
			else
				carry = 1;
		}
		else
		{
			if (((a / 100) + (b / 100)) >= 10)//100¿ ¿¿
				carry = 1;
			else
				carry = 0;
		}
	}

		printf("%d carry operations\n", carry);

	return 0;
}
