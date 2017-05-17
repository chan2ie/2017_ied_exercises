#include <stdio.h>

void reverseary(int num[]);
int max(int num[]);
int min(int num[]);

int main(void) {

	int num[10];
	int i;

	printf("Input (10 numbers):");

	for(i = 0; i < 10; i++){
	scanf("%d",&num[i]);
	}

	reverseary(num);

	for(i = 0; i < 10; i++){
	printf("%d ",num[i]);
	}

	printf("\nMax : %d, ",max(num));
	printf("Min : %d\n",min(num));

	return 0;
}

void reverseary(int num[]){
	
	int i, temp;
	
	for(i = 0; i <= 4; i++){
	
		temp = num[i];
		num[i] = num[9 - i];
		num[9 - i] = temp;
	}

}

int max(int num[]){
	
	int i, max;

	max = num[0];

	for(i = 0; i < 10 ; i++){
	
		if (num[i] > max){
		
			max  = num [i];
		}
	}

	return max;
}

int min(int num[]){

	int i, min;

	min = num[0];

	for(i = 0; i < 10 ; i++){
	
		if (num[i] < min){
		
			min  = num [i];
		}
	}

	return min;
}

