/* 4 - Dado um array de 10 números,
determine se existe algum valor que aparece mais da metade das vezes (valor dominante).. */

#include <stdio.h>

int main() {
    int numeros[10];
    int dominante = -1;

    for (int i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < 10; i++) {
        int contador = 0;
        
        for (int j = 0; j < 10; j++) {
            if (numeros[i] == numeros[j]) {
                contador++;
            }
        }
        if (contador > 5) {
            dominante = numeros[i];
        }
    }

    if (dominante != -1) {
        printf("\nO valor dominante e: %d\n", dominante);
    } else {
        printf("\nNao existe um valor dominante.\n");
    }


}
