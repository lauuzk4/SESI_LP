

/* 2) Leia um número inteiro e informe se ele é par ou ímpar.*/

#include <stdio.h>
int main(){
    
    int numero, resultado;

    printf("digite um numero inteiro: ");
    scanf("%i", &numero);
        resultado = numero % 2;
        
        if( resultado == 0){
            printf("Seu número é par.");
        } else {
            printf("seu número é ímpar.");
        }
        

   
    
}