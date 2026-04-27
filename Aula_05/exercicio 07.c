/*7) Leia 10 números e mostre a média dos valores.*/


#include <stdio.h>

int main()
{   
    float numeros[10];
    float soma = 0;

    for(int i=0;i<10; i++){
        printf("digite o numero %i: ", i+1);
        scanf("%f", &numeros[i]);
        
        soma = soma + numeros[i];
    }
    
    printf("a media de todos os valores e: %2.f", soma/10);
}