#include <stdio.h>

void swapnum(int*, int*);
void forplus(int, int);

int main(void) {

	int num1, num2;

	printf("Input first number: ");
	scanf("%d",&num1);
	printf("Input second number: ");
	scanf("%d",&num2);


	if (num1 > num2){
		swapnum (&num1, &num2);
	}
	
	if (num1 < 1 || num2 < 1){
		printf("Input is less than 1\n");
	}

	else {
		forplus(num1, num2);
	}

	return 0;
}

void swapnum(int* num1, int* num2){
	int forswap;

	forswap = *num1;
	*num1 = *num2;
	*num2 = forswap;
}

void forplus(int num1, int num2){
	int i;
	int sum = 0;

	for(i = num1; i <= num2; i++){
		if ((i % 2) == 0 || (i % 3) == 0){
			sum = sum + i;
		}
	}
	printf("Result: %d\n",sum);
}
