/*4) Leia 6 números e mostre o maior valor.*/


#include <stdio.h>

int main()
{
	int numero[6];
	int maior;

	for(int i = 0; i < 6; i++) {
		printf("digite o número %i: ", i+1);
		scanf("%i", &numero[i]);

	}

    maior = numero[0];

	for(int i = 1; i < 6; i++) {
		if (numero[i] > maior) {
			maior = numero[i];
			printf("\n o maior valor é %i", numero[i]);
		} else {
			maior++;
		}
	}


}