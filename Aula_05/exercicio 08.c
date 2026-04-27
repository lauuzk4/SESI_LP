/*8) Leia 10 números e exiba apenas os valores maiores que a média.*/


#include <stdio.h>

int main()
{   
    float numeros[10];
    int soma = 0;
    float media;

    for(int i=0;i<10; i++){
        printf("digite o numero %i: ", i+1);
        scanf("%f", &numeros[i]);
        
    soma = soma + numeros[i];    
    }
    
    media = soma / 10;
    
    for(int i = 0; i < 10; i++){
        if( numeros[i] > media){
        printf("\n os numeros maiores que a media são: %i - %2.f " , i+1, numeros[i]);
        }    
    }
    
}