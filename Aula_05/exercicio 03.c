/*3) Leia 8 números e calcule a soma de todos os elementos do vetor.*/


#include <stdio.h>

int main()
{   
    int numeros[8];
    int soma = 0;
    
    for(int i=0; i<8;i++){
        printf("digite o numero %i: ", i+1);
        scanf("%i", &numeros[i]);
    soma = soma + numeros[i];
    }
    
    printf("a soma de todos s numeros digitado e: %i", soma);
   
 
}