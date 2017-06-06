#include <stdio.h>

int main() {

	FILE *pass1, *pass2, *output;
	int res;
	float count = 0, avg, mid, final, sum = 0;
	char name[6];

	pass1 = fopen("student.txt", "r");

	while (1) {
		res = fscanf(pass1, "%s%f %f\n", name, &mid, &final);

		if (res == EOF) {
			break;
		}

		count++;
														
		sum += mid + final;
	}
								
	avg = sum / 2 / count;

	fclose(pass1);

	pass2 = fopen("student.txt", "r");
	output = fopen("output33.txt", "w");
												
	fprintf(output, "student_num\t\taverage grade\n");
													
	while (1) {
		res = fscanf(pass2, "%s%f %f\n", name, &mid, &final);
		if (res == EOF) {
			break;
		}
																	
		count = (mid + final) / 2.0;

		fprintf(output, "%-10s\t\t%.2f\t", name, count);

		if(count >= avg){
			fprintf(output, "p\n");
	    }
	    else fprintf(output,"f\n");
	}
	
	fprintf(output, "totla avg : %.2f\n", avg);
	fclose(pass2);
	fclose(output);

	return 0;
}
