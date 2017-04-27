#include <stdio.h>

void fourmath(int*,int*);
void printResult(int*,int*);

int a, b;

int main(){
	
	int a, b;
	
	printf("Input two number :");
	scanf("%d%d",&a,&b);
	fourmath(&a,&b);

	return 0;
}

void fourmath(int *c, int *d){
	
	a = *c + *d;
	b = *c - *d;
	*c = *c * *d;
	*d = *c / *d / *d;
	printResult(c,d);
}

void printResult(int *c, int *d){
	
	printf("Result : a+b=%d, a-b=%d, a*b=%d, a/b=%d\n",a,b,*c,*d);
}
