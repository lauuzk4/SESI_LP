#include <stdio.h>

int main() {
    int n = 0; 
    int contador = 0;

    while (n >= 0) {
        printf("Digite um numero: ");
        scanf("%d", &n);

        if (n >= 0) {
            contador++;
        }
    }

    printf("Quantidade de numeros digitados: %d\n", contador);
}