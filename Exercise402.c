#include<stdio.h>
int main()
{
	int bday;
	int year;

	printf("Birthday : ");
	scanf("%d",&bday);
	printf("Your birthday is %d / %d / %d\n",bday/10000,(bday/100)%100,bday%100);
	printf("Year : ");
	scanf("%d",&year);
	printf("In %d, your age is %d\n",year,year-bday/10000+1);

	return 0;
}
