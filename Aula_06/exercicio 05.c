/*5) Leia uma matriz 3x3 e exiba a soma de cada linha.*/


#include <stdio.h>


int main() {

	int numero[3][3];
	int soma = 0;
	int soma1 = 0;
	int soma2 = 0;
	int soma3 = 0;

	for(int l = 0; l < 3; l++) {

		for(int c = 0; c < 3; c++) {
			printf("digite o numero da linha %i e coluna %i: ", l+1, c+1);
			scanf("%i",&numero[l][c]);
		}

	}



	for(int l = 0; l < 3; l++) {
		soma =0;
		for(int c = 0; c < 3; c++) {
			soma = soma + numero[l][c];
		}
		printf("\nA soma da linha %i: %i", l+1, soma);
	}

}

