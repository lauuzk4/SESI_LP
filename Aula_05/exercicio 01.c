/*1) Leia 5 números inteiros e armazene em um vetor. Exiba todos os valores.*/


#include <stdio.h>

int main()
{   
    int numeros[5];
    
    for(int i=0; i<5; i++){
        printf("digite o número %i: ", i +1);
        scanf("%i", &numeros[i]);
    }

    for(int i=0; i<5; i++){
    printf("\n número %i = %i", i +1, numeros[i]);
    }   
    


   
}