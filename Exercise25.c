#include <stdio.h>

int isDivison(int, int);
int isPrime(int);

int main(void) {
	int  num;
	int i;

	printf("Input : ");
	scanf("%d",&num);

	for(i = 1; i <= num; ){

		if(isDivison(num, i) + isPrime(i) == 2){
			printf("%d\t",i);
		}

		i++;
	}
	return 0;
}

int isDivison(int num, int i){
	if(num % i == 0){
		return 1;
	}
	else{
		return 0;
	}
}

int isPrime(int i){
	int j;
	int isiPrime = 0;

	for(j = 2; j < i; j++){
		if(i % j == 0) break;
		else isiPrime++;
	}

	if (isiPrime == (i - 2)){
		return 1;
		}
	else return 0;
}
