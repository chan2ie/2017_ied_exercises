#include <stdio.h>

int palindrome (int, int);

int main(void) {

	int num;
	int digit = 1;

	printf("Input: ");
	scanf("%d", &num);

	if (num == 0){
		printf("0 is not a palindrome number.\n");
	}
	else if (num < 0){
		printf("Input number cannot be negative.\n");
	}
	else {
		
		if(palindrome(num, digit) == 1){
			printf("%d is a palindrome number.\n",num);
		}
		else {
			printf("%d is not a palindrome number.\n",num);
		}
	}

	return 0;
}

int palindrome (int num, int digit){
	
	int frontnum;

	for (frontnum = num; frontnum >= digit * 10;){
		frontnum = frontnum / 10;
	}
	
	if( (num / digit) < digit * 100 ){
		if (num / digit >=  digit * 10){
			if ((num / digit) % 10 == ((num / digit) / 10) % 10){
				return 1;
			}
			else return 0;
		}
		else return 1;
	}
	else{
		if ((num / digit) % 10 == frontnum % 10){
			palindrome(num, digit*10);
		}
		else return 0;
	}
}
