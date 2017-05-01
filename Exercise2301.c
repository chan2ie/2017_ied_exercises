#include <stdio.h>

void func_gcd(int, int, int*);

int main(void) {
	int num1, num2, gcd;

	printf("Input first number: ");
	scanf("%d",&num1);
	printf("Input second number: ");
	scanf("%d",&num2);

	func_gcd(num1, num2, &gcd);

	printf("GCD: %d\n",gcd);

	return 0;
}

void func_gcd(int num1, int num2, int* gcd){
	int remain;

	for(remain = 1; remain > 0;){
		remain = num1 % num2;
		num1 = num2;
		num2 = remain;
	}
	
	*gcd = num1;

}
