

/* 9) Número Positivo, Negativo ou Zero
Leia um número e informe se ele é:
Positivo
Negativo
Zero */

#include <stdio.h>
int main() {
	float n1;
	
	printf("digite o numero: ");
	scanf("%f", &n1);
	
	if(n1 > 0){
	    printf("seu número é positivo.");
	} else if(n1 < 0) {
	    printf("seu número é negativo.");
	} else {
	    printf("seu número é zero.");
	}
}