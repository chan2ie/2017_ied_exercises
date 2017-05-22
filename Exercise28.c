#include <stdio.h>

void make_capital(char*);

int main(void) {

	char a[50];
	int i;

	for(i = 0; i < 50; i++){
		scanf("%c",&a[i]);

		if(a[i] == '\n') break;
	}

	make_capital(a);

	for(i = 0; i < 50; i++){
		printf("%c",a[i]);

		if(a[i] == '\n'){
			printf("\n");
			break;
		}
	}

	return 0;
}

void make_capital(char a[]){
	
	int i;

	for(i = 0; i < 50; i++){
	
		if(a[i] == ' '){}
		else if(a[i] <= 'z' && a[i] >= 'a'){
			a[i] += 'A' - 'a';
		}
	}
}
