#include <stdio.h>

void plus(float, float);
void minus(float, float);
void multiply(float, float);
void divide(float, float);

int main(){

	float a, b;
	char opter;

	printf("Operator (+, -, *, /)\n");
	printf("Please enter the formula. (ex : 12.3 + 5.5)\n");

	scanf("%f %c %f",&a, &opter, &b);

	switch (opter){
		case '+':  plus(a, b); break;
		case '-' : minus(a, b); break;
		case '*' : multiply(a, b); break;
		case '/' : divide(a, b); break;
		default : printf("Invalid operator : %c\n",opter);
	}

	return 0;

}

void plus(float a, float b){

	printf("%.2f + %.2f = %.2f\n",a, b, a+b);
}

void minus(float a, float b){

	printf("%.2f - %.2f = %.2f\n",a, b, a-b);
}

void multiply(float a, float b){

	printf("%.2f * %.2f = %.2f\n",a, b, a*b);
}

void divide(float a, float b){

	int c;

	c = (b == 0);

	switch (c){
		case 1 : printf("Division by zero\n"); break;
		default : printf("%.2f / %.2f = %.2f",a, b, a/b);
	}
}
