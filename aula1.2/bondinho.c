#include <stdio.h>

int main() {
	// maximo é de 50 pessoas

	// A => o numero de alunos
	// M => numero de monitores

	int A, M;
	scanf("%d %d", &A, &M);

	int total = A + M;
	if(total <= 50) {
		printf("S\n");
	} else {
		printf("N\n");
	}

	return 0;
}







