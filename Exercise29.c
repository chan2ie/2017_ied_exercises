#include <stdio.h>

void matrix_multiple(int matrix[][4][4]);

int main(void) {

	int matrix[3][4][4] = {0};
	int i,j,k;

	for(i = 0; i < 2; i++){
		if(i == 0){
			printf("First matrix:\n");
		}	
		if(i == 1){
			printf("Second matrix:\n");
		}
		for(j = 0; j < 4; j++){
			for(k = 0; k < 4; k++){
				scanf("%d",&matrix[i][j][k]);
			}
		}
	}

	matrix_multiple(matrix);

	printf("Result: \n");

	for(j = 0; j < 4; j++){
		for(k = 0; k < 4; k++){
			printf("%4d   ",matrix[2][j][k]);	
		}
		printf("\n");
	}

	return 0;
}

void matrix_multiple(int matrix[][4][4]){

	int i, j, k;

	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			for(k = 0; k < 4; k++){
				matrix[2][i][j] = matrix[2][i][j] +  matrix[0][i][k] * matrix[1][k][j];
			}
		}
	}

}
