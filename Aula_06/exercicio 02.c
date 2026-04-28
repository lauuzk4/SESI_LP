/*2) Leia uma matriz 2x2 e mostre a soma de todos os elementos.*/


#include <stdio.h>


int main() {

	int numero[2][2];
	int soma = 0;

	for(int l = 0; l < 2; l++) {
		for(int c=0; c < 2; c++) {
			printf("\ndigite o numero de linha %i e coluna %i: ", l+1, c+1);
			scanf("%i", &numero[l][c]);
			 soma = soma + numero[l][c];
		}
	}

    printf("a soma de todos os valores e %i", soma);


}
