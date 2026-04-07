#include <stdio.h>

int main() {
    int senha;
    int senha_correta = 1234;

    do {
        printf("Digite a senha: ");
        scanf("%d", &senha);
    } while (senha != senha_correta);

    printf("Senha correta, acesso liberado.\n");
}