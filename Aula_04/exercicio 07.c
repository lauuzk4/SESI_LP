/* 7 - Um caixa eletrônico registrou 10 valores de saques realizados.
Crie um programa que:
calcule o total sacado
identifique o maior saque realizado
informe quantos saques foram acima de R$ 500. */

#include <stdio.h>

int main() {
    float saques[10];
    float total = 0, maiorSaque = 0;
    int acimaDe500 = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o valor do saque %d: R$ ", i + 1);
        scanf("%f", &saques[i]);
        total += saques[i];
        if (i == 0 || saques[i] > maiorSaque) {
            maiorSaque = saques[i];
        }
        if (saques[i] > 500) {
            acimaDe500++;
        }
    }

    printf("\n Relatorio do Caixa: ");
    printf("\nTotal sacado no dia: R$ %.2f", total);
    printf("\nMaior saque realizado: R$ %.2f", maiorSaque);
    printf("\nQuantidade de saques acima de R$ 500: %d\n", acimaDe500);

}