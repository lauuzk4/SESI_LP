#include <stdio.h>

int main() {
    int n, fatorial = 1;

    printf("Digite um numero: ");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++) {
        printf("%i x %i = ", fatorial, i);
        fatorial *= i;
        printf("%i\n", fatorial);
    }

    printf("\nFatorial de %i = %i\n", n, fatorial);
}