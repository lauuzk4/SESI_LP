#include <stdio.h>

int main() {
    int n, i, d = 0;

    printf("Digite um numero: ");
    scanf("%i", &n);

    if (n <= 1) {
        printf("%i nao e um numero primo.\n", n);
    } else {
        for (i = 1; i <= n; i++) {
            if (n % i == 0) {
                d++;
            }
        }

        if (d == 2) {
            printf("%d e um numero primo.\n", n);
        } else {
            printf("%d nao e um numero primo.\n", n);
        }
    }

}