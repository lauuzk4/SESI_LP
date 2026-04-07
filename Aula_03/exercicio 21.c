#include <stdio.h>

int main() {
    int opcao;

    do {
        // Mostra o menu
        printf("*******************************Menu*******************************\n");
        printf("        1: Dizer 'Olá'\n");
        printf("        2: Dizer 'Tudo bem?'\n");
        printf("        3: Sair\n");
        printf("*******************************Menu*******************************\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        if (opcao == 1) {
            printf("Olá!\n");
        } else if (opcao == 2) {
            printf("Tudo bem?\n");
        } else (opcao == 3); {
            printf("Saindo do programa...\n");
        }
    } while (opcao != 3);

    return 0;
}