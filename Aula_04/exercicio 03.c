/* 3 - Um sistema armazenou 12 valores inteiros.
classifique-os como ordem crescente, decrescente ou desordenada. */

#include <stdio.h>

int main() {
    int valores[12];
    int crescente = 1; 
    int decrescente = 1; 

    for (int i = 0; i < 12; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }


    for (int i = 0; i < 11; i++) {
        if (valores[i] > valores[i + 1]) {
            crescente = 0; // Falso
        }
        if (valores[i] < valores[i + 1]) {
            decrescente = 0; // Falso
        }
    }


    printf("\nClassificacao: ");
    if (crescente == 1) {
        printf(" Crescente\n");
    } else if (decrescente == 1) {
        printf(" Decrescente\n");
    } else {
        printf("Desordenada\n");
    }


}
