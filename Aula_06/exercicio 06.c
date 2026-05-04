/*6) Leia uma matriz 4x4 e encontre o maior e o menor valor.*/

#include <stdio.h>

int main() {

    int matriz[4][4];
    int l = 0;
    int c = 0;
    int maior = matriz[0][0];
    int menor = matriz[0][0];

    for(int l = 0; l < 4; l++) {
        for(int c = 0; c < 4; c++) {
            printf("\ndigite o numero da linha %i e da coluna %i: ", l+1, c+1);
            scanf("%i", &matriz[l][c]); } }
    l = 0;
    while(l < 4) {
        c = 0;
        while(c < 4) {
            printf(" | %i", matriz[l][c]);

            if(matriz[l][c] > maior) {
                maior = matriz[l][c]; }

            if(matriz[l][c] < menor) {
                menor = matriz[l][c];}
            c++; }
        printf("\n"); l++; }
    printf("\n o maior valor é: %i", maior);
    printf("\n o menor valor é: %i", menor); }
    

