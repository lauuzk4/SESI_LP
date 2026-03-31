

/* 14) Classificação de Nota com Conceito
Leia uma nota de 0 a 10 e classifique:
A (>= 9)
B (7 – 8.9)
C (5 – 6.9)
D (< 5)
*/

#include <stdio.h>
int main() {
	float nota;

	printf("digite uma nota de 0 a 10: ");
	scanf("%f", &nota);

	if(nota >= 9){
	    printf("A");
	} else if(nota <= 8.9){
	    printf("B");
	} else if(nota <= 6.9) {
	    printf("C");
	} else {
	    printf("D");
}
}

