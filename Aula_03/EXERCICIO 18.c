#include <stdio.h>

int main() {
    int numero;
    int idade = 0; 
    int contagem = 0;

    do {
        printf("DIGITE AS IDADES DE SEUS AMIGOS (quando finalizar, adicione 0): ");
        scanf("%i", &numero);

        if (numero > 0) {
            idade = idade + numero;     
            contagem = contagem + 1;  
        }

    } while (numero != 0);

    if (contagem > 0) {
        int media = idade / contagem;
        printf("\nA MEDIA DE IDADE E: %i", media);
    }
    }