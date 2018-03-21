#include <stdio.h>

int main() {
	int alturaDaCaixa, larguraDaCaixa, profundidadeDaCaixa;
	int alturaDaJanela, larguraDaJanela;

	scanf("%d %d %d %d %d", &alturaDaCaixa, &larguraDaCaixa, &profundidadeDaCaixa,
							&alturaDaJanela, &larguraDaJanela);


	// printf("%d %d %d %d %d\n", alturaDaCaixa, larguraDaCaixa, profundidadeDaCaixa,
							// alturaDaJanela, larguraDaJanela);

	if(alturaDaCaixa <= alturaDaJanela && larguraDaCaixa <= larguraDaJanela) {
		printf("S\n");
	} else if(alturaDaCaixa <= alturaDaJanela && profundidadeDaCaixa <= larguraDaJanela) {
		printf("S\n");
	} else if(larguraDaCaixa <= alturaDaJanela && profundidadeDaCaixa <= larguraDaJanela) {
		printf("S\n");
	} else if(larguraDaCaixa <= alturaDaJanela && alturaDaCaixa <= larguraDaJanela) {
		printf("S\n");
	} else if(profundidadeDaCaixa <= alturaDaJanela && alturaDaCaixa <= larguraDaJanela) {
		printf("S\n");
	} else if(profundidadeDaCaixa <= alturaDaJanela && larguraDaCaixa <= larguraDaJanela) {
		printf("S\n");
	} else {
		printf("N\n");
	}










	return 0;
}
