#include <stdio.h>
int main(){

	int numclass, score, cutline;
	int sumscore = 0;
	int numfail = 0;
	int num = 0;

	printf("Number of clas: ");
	scanf("%d",&numclass);
	printf("Cutline: ");
	scanf("%d",&cutline);

	while(numclass - 1 >= num){
		printf("Input score #%d: ",num);
		scanf("%d",&score);

		sumscore = sumscore + score;

		if(score >= cutline);
		else numfail = numfail + 1;

		num = num + 1;
	}

	printf("Average score: %.2f\n",(float)sumscore/numclass);
	printf("Number of filures: %d\n",numfail);

	return 0;
}
