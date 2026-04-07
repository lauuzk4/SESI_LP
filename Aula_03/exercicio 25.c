#include <stdio.h>

int main() {
    int valor, nota100, nota50, nota20, nota10, nota5, nota1;

    printf("Digite o valor para saque: ");
    scanf("%d", &valor);

    nota100 = valor / 100;
    valor %= 100;

    nota50 = valor / 50;
    valor %= 50;

    nota20 = valor / 20;
    valor %= 20;

    nota10 = valor / 10;
    valor %= 10;

    nota5 = valor / 5;
    valor %= 5;

    nota1 = valor;

    printf("\nNotas a serem entregues:\n");
    if (nota100 > 0) printf("Notas de R$ 100: %d\n", nota100);
    if (nota50 > 0)  printf("Notas de R$ 50:  %d\n", nota50);
    if (nota20 > 0)  printf("Notas de R$ 20:  %d\n", nota20);
    if (nota10 > 0)  printf("Notas de R$ 10:  %d\n", nota10);
    if (nota5 > 0)   printf("Notas de R$ 5:   %d\n", nota5);
    if (nota1 > 0)   printf("Notas de R$ 1:   %d\n", nota1);

}