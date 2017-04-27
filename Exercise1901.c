#include <stdio.h>

void swap(int*, int*);
void absValue(int*);

int main(){

	int num1, num2, num3;

	printf("Input : ");
	scanf("%d %d %d",&num1, &num2, &num3);

	absValue(&num1);
	absValue(&num2);
	absValue(&num3);

	swap(&num1, &num2);
	swap(&num2, &num3);
	swap(&num1, &num2);

	printf("Result : %d %d %d\n",num1, num2, num3);

	return 0;
}

void absValue(int* numswap){
	if (*numswap >= 0);
	else *numswap = (0 - *numswap);
}

void swap(int* bignum, int*smallnum){
	int helpnum = *bignum;

	if (*smallnum > *bignum){
	*bignum = *smallnum;
	*smallnum = helpnum;}
	else ;
}
