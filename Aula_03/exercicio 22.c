#include <stdio.h>

int main() {
    int n;

    do {
        printf("Escolha um número positivo: ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("numero incorreto, digite novamente \n");
        }else {
            printf("número positivo.");
        }
    } while (n <= 0);
}