#include <stdio.h>

int main(void) {

	FILE *input, *output;
	
	float num1, num2, sol, ans, res;
	char op;

	input = fopen("input32.txt","r");
	output = fopen("output32.txt","w");

	while(1){

		res = fscanf(input, "%f %c %f = %f\n", &num1, &op, &num2, &sol);
	
		if(res == EOF){
			break;
		}

		switch(op){
			case '+' : ans = num1 + num2; break;
			case '-' : ans = num1 - num2; break;
			case '*' : ans = num1 * num2; break;
			case '/' : ans = num1 / num2; break;
			case '%' : ans = (int)num1 % (int)num2; break;
		}

		fprintf(output, "%.2f %c %.2f = %.2f ", num1, op, num2, sol);
	
		if(ans != sol)  fprintf(output, "in");
		
		fprintf(output, "correct\n");
	}

	fclose(input);
	fclose(output);

	return 0;
}
