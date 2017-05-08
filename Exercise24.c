#include <stdio.h>

int fib(int);

int main(void) {

	int num;

	printf("Input n: ");
	scanf("%d",&num);

	if (num < 0){
		printf("n cannot be negative number.");
	}
	else {
		printf("fib(%d) = %d\n", num, fib(num));
	}

	return 0;
}

int fib(int num){
	
	int result;
	int fib0 = 0;
	int fib1 = 1;
	int i = 2;

	if (num == 0){
		result = fib0;
	}
	else if (num == 1){
		result = fib1;
	}
	else {
		do {
			result = fib0 + fib1;
			fib0 = fib1;
			fib1 = result;

			i++;
		}
		while (i <= num);
	}
	
	return result;
}
