

/* 11) Verificação de Múltiplos
Leia dois números e verifique se o primeiro é múltiplo do segundo.*/

#include <stdio.h>
int main() {
	
	 int n1, n2;
	 
	 printf("digite o primeiro numero: ");
	 scanf("%i", &n1);
	 
	 printf("digite o segundo numero: ");
	 scanf("%i", &n2);
	 
	 if(n1 % n2 == 0){
	     printf( "%i é múltiplo de %i", n1,n2);
	 } else {
	     printf( "%i não é múltiplo de %i", n1,n2);
	 }
}
