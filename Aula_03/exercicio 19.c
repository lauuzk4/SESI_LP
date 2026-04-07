#include <stdio.h>

int main() {
    int numero;
    int maior = 0; 

    do {
        printf("DIGITE UM NÚMERO (quando finalizar, adicione 999): ");
        scanf("%i", &numero);
       
        if (numero != 999 && numero > maior) {
            maior = numero; 
        }

    } while (numero != 999);

    if (maior != 0) {
        printf("\nO MAIOR NUMERO DIGITADO FOI: %i", maior);
    }
}