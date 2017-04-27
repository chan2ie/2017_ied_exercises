#include<stdio.h>
int main()
{
	int price;
	float price3, price6;

	printf("Price : ");
	scanf("%d",&price);

	price3 = (float)price;
	price6 = price*1.05*1.05*1.05;

	printf("----------------output----------------\n");
	printf("Month\t\t:%10d%10d\n",3,6);
	printf("Payment\t\t:%10d%10d\n",(int)price3,(int)price6);
	printf("--------------------------------------\n");
	printf("Pay/month\t:%10.2f%10.2f\n",price3/3.0,price6/6.0);

	return 0;
}
