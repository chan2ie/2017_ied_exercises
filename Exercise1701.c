#include <stdio.h>

float avgFunc(float, float, float);
void gradeFunc(float);

int main(){

	float score1, score2, score3;
	
	printf("Input: ");
	scanf("%f%f%f",&score1, &score2, &score3);

	gradeFunc(avgFunc(score1, score2, score3));

	return 0;

}

float avgFunc(float score1, float score2, float score3){

	return (score1 + score2 + score3) / 3;

}

void gradeFunc(float avg){

	char grade;

	if (avg >= 50){
		if (avg >= 70){
			if (avg >= 80){
				if (avg >= 90){
				grade = 'A';}
				else grade = 'B';
			}
			else grade = 'C';
		}
		else grade = 'D';
	}
	else grade = 'F';

	printf("Grade: %c\n",grade);
}
