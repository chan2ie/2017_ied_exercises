#include <stdio.h>

int main(void) {

	int num;
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;

	printf("Input: ");
	scanf("%d",&num);

	while(i < num){

		while(j < (num - i)){
			printf(" ");
			j = j + 1;
		}

		while(k < (2 * i + 1)){
			printf("*");
			k = k + 1;
		}

		while(l < (num - i)){
			printf(" ");
			l = l + 1;
		}

		printf("\n");
		j = 0;
		k = 0;
		l = 0;
		i = i + 1;
	}

	return 0;
}
