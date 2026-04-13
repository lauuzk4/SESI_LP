/* 1 - Um professor registrou as notas de 10 alunos em um array.
Crie um programa que:
calcule a média da turma
identifique quantos alunos ficaram acima da média
exiba apenas as notas acima da média. */


#include <stdio.h>

int main() {
    float notas[10];
    float soma = 0  ;
    float media;
    int contador = 0;

    
    for (int i = 0; i < 10; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / 10; 
    printf("\nMedia da turma: %.2f\n", media);

   
    printf("Notas acima da media: ");
    for (int i = 0; i < 10; i++) {
        if (notas[i] > media) {
            printf("%.1f ", notas[i]); 
            contador++;  
        }
    }

    printf("\nTotal de alunos acima da media: %d\n", contador);
}