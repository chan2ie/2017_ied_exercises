#include <stdio.h>
int main(){

	int year;

	printf("Enter the year to be tested: ");
	scanf("%d",&year);

	if (year % 4 == 0 && year % 100 != 0)
		printf("%d is a leap year\n",year);
	else{
		printf("%d is not a leap year\n",year);	
		printf("%d is a leap year\n",year / 4 * 4);
	}
	
	return 0; 
}
