#include <stdio.h>

int main() {
	// maximo é de 50 pessoas

	// A => o numero de alunos
	// M => numero de monitores

	int alunos, monitores;
	scanf("%d %d", &alunos, &monitores);

	int total = alunos + monitores;
	// if(total > 50) {
	// 	printf("N\n");
	// } else {
	// 	printf("S\n");
	// }
	if(total <= 50) {
		printf("S\n");
	} else {
		printf("N\n");
	}

	return 0;
}







