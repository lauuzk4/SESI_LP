/* 6 - Um sistema armazenou 10 números inteiros.
Crie um programa que:
separe os números em pares e ímpares
conte quantos existem de cada tipo
exiba os dois grupos separadamente. */

#include <stdio.h>

int main() {
    int numeros[10];
    int c_par = 0 ; 
    int c_impar = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
        
        if (numeros[i] % 2 == 0) {
            c_par++;
        } else {
            c_impar++;
        }
    }

    printf("\nNumeros PARES (%d): ", c_par);
    for (int i = 0; i < 10; i++) {
        if (numeros[i] % 2 == 0) {
            printf("%d ", numeros[i]);
        }
    }

    printf("\nNumeros IMPARES (%d): ", c_impar);
    for (int i = 0; i < 10; i++) {
        if (numeros[i] % 2 != 0) {
            printf("%d ", numeros[i]);
        }
    }

    printf("\n");

}
