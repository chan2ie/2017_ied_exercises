#include <stdio.h>

double strtodouble(char num[]);

int main(void) {

	int i;
	char num[12] = {0}; 

	for(i = 0; i < 12; i++){
		scanf("%c",&num[i]);
		if (num[i] == '\n'){
			num[i] = 0;
			break;
		}
	}

	printf("Result: %10.6lf\n",strtodouble(num));

	return 0;
}

double strtodouble(char num[]){
	
	int i, count = 10;
	double result = 0;

	for(i = 0; i < 12; i++){	
		if (num[i] == '-') i++;
		if (num[i] == 0) break;
		if (num[i] == '.'){
			i++;
			for(count = 10; i < 12; i++){
				if (num[i] == 0) break;	
				result += num[i] - '0';
				result *= 10;
				count *= 10;
			}
			break;
		}
		else{
			result += num[i] - '0';
			result *= 10;
			if (num[i] == 0) break;	
		}
	}
	result /= (double)count;

	if (num[0] == '-') return -result;
	
	else return result;


}
