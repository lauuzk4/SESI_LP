/*3) Leia uma matriz 3x3 e mostre apenas os elementos da diagonal principal.*/
#include <stdio.h>
int main() {

	int matriz [3][3];
	int soma = 0;


	for (int l=0; l<3; l++) {
	for(int c=0; c<3; c++) {
			printf("Digite o valor linha: %i, Coluna %i:", l+1,c+1);
			scanf("%i", &matriz[l][c]);
		}
	}
	printf("Diagonal principal : \n");
	for(int l=0; l<3; l++) {
	for(int c=0; c<3; c++) {
			if(l == c) {
				printf("| %i |", matriz[l][c]);
			}
		}
		printf("\n");
	}

}