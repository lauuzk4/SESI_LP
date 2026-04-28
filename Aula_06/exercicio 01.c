/*1) Leia uma matriz 3x3 e exiba todos os elementos.*/


#include <stdio.h>


int main() {

	int matriz[3][3];

	for(int l = 0; l < 3; l++) {
		for(int c=0; c < 3; c++) {
			printf("\ndigite o numero de linha %i e coluna %i: ", l+1, c+1);
			scanf("%i", &matriz[l][c]);
		}
	}

	int l=0;
	int c=0;

	while( l < 3) {
		c=0;
		while(c<3) {
			printf(" | %i", matriz[l][c]);
			c++;
		}
		printf("\n");
		l++;
	}
}
