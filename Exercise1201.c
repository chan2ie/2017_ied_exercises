#include <stdio.h>

int x = 1;
int Fibonacci (int*);
int main(){
	
	int x = 1;

	printf("Fibo(2) %d\n",x);
	x = Fibonacci(&x);
	printf("Fibo(3): %d\n",x);
	x = Fibonacci(&x);
	printf("Fibo(4): %d\n",x);
	x = Fibonacci(&x);
	printf("Fibo(5): %d\n",x);
	x = Fibonacci(&x);
	printf("Fibo(6): %d\n",x);
	x = Fibonacci(&x);
	printf("Fibo(7): %d\n",x);
	x = Fibonacci(&x);
	printf("Fibo(8): %d\n",x);
	x = Fibonacci(&x);
	printf("Fibo(9): %d\n",x);

	return 0;

}

int Fibonacci (int *y){

	*y = x + *y;
	x = *y - x;
	return *y;
}
