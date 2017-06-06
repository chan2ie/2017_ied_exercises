#include <stdio.h>

double euler(int);

int main(void) {

	printf("approximate euler's number : %.8lf\n",euler(0));

	return 0;
}

double euler(int num){
	double r, fac = 1;
	int i;
	if(num == 0){
		r = euler(num+1);

		return r + 1;
	}
	else{
		for(i = 1; i <= num; i++){
		 fac /= i;
		}
		
		if(fac < 0.0000001){
			return fac;
		}
		
		else{
			r = euler(num + 1);
			return r + fac;
		}
	}
}
