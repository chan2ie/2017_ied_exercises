#include <stdio.h>

int main(void) {
	char alph;

	scanf("%c",&alph);

	printf("previous alphabet is %c\n",--alph);
	++alph;
	printf("next alphabet is %c\n",++alph);

	return 0;
}
