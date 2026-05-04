/*4) Leia uma matriz 4x4 e conte quantos números são maiores que 10.*/


#include <stdio.h>


int main() {

	int numero[4][4];
	int num_10 = 0;
	
	for(int l = 0; l < 4; l++){
	    for(int c = 0; c < 4; c++){
	        printf("digite o numero da linha %i e coluna %i: ", l+1, c+1);
	        scanf("%i",&numero[l][c]);
	           if(numero[l][c] > 10){
	            num_10++;
	    } 	
	   }
	}  
	    printf("existem %i numeros maior que 10.", num_10);
}
