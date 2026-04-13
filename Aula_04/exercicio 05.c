/* 5 - Um sistema registrou a temperatura de 7 dias consecutivos.
Crie um programa que:
calcule a média das temperaturas
identifique o dia mais quente e o mais frio
informe quantos dias ficaram acima da média. */

#include <stdio.h>

int main() {
    float temp[7];
    float soma = 0;
    float media;
    float maior ;
    float menor;
    int acimaMedia = 0;

    for (int i = 0; i < 7; i++) {
        printf("Digite a temperatura do dia %d: ", i + 1);
        scanf("%f", &temp[i]);
        soma += temp[i];

        if (i == 0) {
            maior = temp[i];
            menor = temp[i];
        }
        if (temp[i] > maior) maior = temp[i];
        if (temp[i] < menor) menor = temp[i];
    }

   
    media = soma / 7;

    for (int i = 0; i < 7; i++) {
        if (temp[i] > media) {
            acimaMedia++;
        }
    }

    printf("\n--- Relatorio Semanal ---");
    printf("\nMedia: %.1f", media);
    printf("\nMais quente: %.1f", maior);
    printf("\nMais frio: %.1f", menor);
    printf("\nDias acima da media: %d\n", acimaMedia);

}
