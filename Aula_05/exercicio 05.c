/*5) Leia 6 números e mostre o menor valor.*/


#include <stdio.h>

int main()
{
	int numero[6];
	int menor;

	for(int i = 0; i < 6; i++) {
		printf("digite o número %i: ", i+1);
		scanf("%i", &numero[i]);

	}

	menor = numero[0];

	for(int i = 1; i < 6; i++) {
		if (numero[i] < menor) {
			menor = numero[i];
			printf("\n o menor valor é %i", numero[i]);
		} else {
			menor++;
		}
	}


}