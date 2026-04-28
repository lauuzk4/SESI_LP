#include <stdio.h>

int main() {

	int matriz[4][4];

	//PRIMEIRO PERCORRE AS LINHAS
	for(int l = 0; l < 4; l++) {
		//SEGUNDO FOR PERCORRE COLUNAS
		for(int c=0; c < 4; c++) {
			printf("\nDIGITE VALOR DE L-%i E C-%i: ", l+1, c+1);
			scanf("%i", &matriz[l][c]);
		}
	}

	int l=0;
	int c=0;

	while( l < 4) {
		c=0;
		while(c<4) {
			printf(" | %i", matriz[l][c]);
			c++;
		}
		printf("\n");
		l++;
	}
}
