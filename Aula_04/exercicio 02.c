/* 2 - Uma pesquisa coletou a idade de 15 pessoas.
Desenvolva um programa que:
classifique as idades em: jovem (até 17), adulto (18–59) e idoso (60+)
informe qual grupo possui maior quantidade. */

#include <stdio.h>

int main() {
    float idades[15];
    int c_jovem = 0, c_adulto = 0, c_idoso = 0;


    for (int i = 0; i < 15; i++) {
        printf("Digite a idade %d: ", i + 1);
        scanf("%f", &idades[i]);
    }


    printf("\n Classificacao: ");
    for (int i = 0; i < 15; i++) {
        if (idades[i] <= 17) {
            printf("\n%.0f Jovem", idades[i]); 
            c_jovem++;  
        } else if (idades[i] <= 59) {
            printf("\n%.0f Adulto", idades[i]);
            c_adulto++;
        } else {
            printf("\n%.0f Idoso", idades[i]);
            c_idoso++;
        }
    }

    printf("\n\n Resultado Final: ");
    printf("\nJovens: %d | Adultos: %d | Idosos: %d", c_jovem, c_adulto, c_idoso);
    
    if (c_jovem >= c_adulto && c_jovem >= c_idoso) {
        printf("\nMaior grupo: Jovens\n");
    } else if (c_adulto >= c_jovem && c_adulto >= c_idoso) {
        printf("\nMaior grupo: Adultos\n");
    } else {
        printf("\nMaior grupo: Idosos\n");
    }

}