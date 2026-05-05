/*
===================================================Calculadora==================================================================
*/

#include <stdio.h>

int adicao(int a, int b) {
	return a + b;
}
int subtracao(int a, int b) {
	return a - b;
}
int multiplicacao(int a, int b) {
	return a * b;
}

int divisao(int a, int b) {
	return a / b;
}

void imprimirvalores(char *descricao, int valor) {
	printf("\n%s: %i ", descricao, valor);
}


int main() {
	int n1, n2;
	int calcular;


	printf("\ndigite o numero 1: ");
	scanf("%i", &n1);

	printf("\ndigite o numero 2: ");
	scanf("%i", &n2);

	do{
		printf("\n=============opções===============\n");
		printf(" 1 - soma +\n 2 - divisão /\n 3 - multiplicação *\n 4 - subtração -\n 0 - sair");
		printf("\n==================================\n");
		printf(" escolha uma das opções: ");
		scanf("%i", &calcular);


		if(calcular == 1) {
			imprimirvalores("soma dos numeros ", adicao(n1, n2));
		}
		else if(calcular == 2) {
			imprimirvalores("divisão dos numeros ", divisao(n1, n2));
		}
		else if(calcular == 3) {
			imprimirvalores("multiplicação dos numeros ", multiplicacao(n1, n2));
		}
		else if(calcular == 4) {
			imprimirvalores("subtração dos numeros ", subtracao(n1, n2));
		} else {
			return 0;
		}
		
	}while(calcular != 0);
}
