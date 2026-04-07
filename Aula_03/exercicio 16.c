#include <stdio.h>

int main() {
  
    int num;
    int soma = 0;
    
    do {
        printf (" digite os números que você quer somar\n(quando finalizar digite 0 para fazer a soma): ");
        scanf("%i", &num); 
        
        soma = soma + num;
        
    }while (num != 0);
    
    printf("\n o resultado da soma de todos os numeros é: \n %i ", soma);
}