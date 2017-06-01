#include <stdio.h>

int main(void) {
	
	FILE *input1, *input2, *output;
	char str1[100], str2[100], temp1, temp2;
	int countc = 0, countcopy = 0;

	printf("input first file name: ");
	scanf("%s",str1);
	printf("input second file name: ");
	scanf("%s",str2);

	input1 = fopen(str1,"r");
	input2 = fopen(str2,"r");
	output = fopen("output","w");

	while(1){
		while(1){
			temp1 = fgetc(input1);
			if(temp1 != '\t' && temp1 != ' ' && temp1 != '\n'){
				break;
			}
		}
		while(1){
			temp2 = fgetc(input2);
			if(temp2 != '\t' && temp2 != ' ' && temp2 != '\n'){
				break;
			}
		}
		if (temp1 == temp2){
			countcopy++;
		}

		countc++;
	
		if(temp1 == EOF || temp2 == EOF){ 
			break;
		}
	}

	fprintf(output,"Total Character: %d\nSame Character: %d\n%.3f%%",countc,countcopy,(float)countcopy / (float)countc * 100);

	fclose(input1);
	fclose(input2);
	fclose(output);

	return 0;
}
