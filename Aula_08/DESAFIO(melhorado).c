#include <stdio.h>

char livros[100][3][100];
int estoque[100];
int vendidos[100];
int contador = 0;

/* PROTÓTIPOS */
int login();
void listar_livros();
void cadastro_livros();
void comprar_livro();
void buscar_livro();
void relatorio();

/* LOGIN */

int login() {

    char usuario[50];
    char senha[50];

    printf("\n================================================\n");
    printf("                    LOGIN\n");
    printf("================================================\n");

    printf("Usuario: ");
    scanf("%49s", usuario);

    printf("Senha: ");
    scanf("%49s", senha);

    int clienteOk = 1;
    int vendedorOk = 1;

    char userCliente[] = "cliente";
    char senhaCliente[] = "1234";

    for(int i = 0; userCliente[i] != '\0' || usuario[i] != '\0'; i++) {
        if(userCliente[i] != usuario[i]) clienteOk = 0;
    }

    for(int i = 0; senhaCliente[i] != '\0' || senha[i] != '\0'; i++) {
        if(senhaCliente[i] != senha[i]) clienteOk = 0;
    }

    if(clienteOk == 1) return 1;

    char userVendedor[] = "vendedor";
    char senhaVendedor[] = "1234";

    for(int i = 0; userVendedor[i] != '\0' || usuario[i] != '\0'; i++) {
        if(userVendedor[i] != usuario[i]) vendedorOk = 0;
    }

    for(int i = 0; senhaVendedor[i] != '\0' || senha[i] != '\0'; i++) {
        if(senhaVendedor[i] != senha[i]) vendedorOk = 0;
    }

    if(vendedorOk == 1) return 2;

    return 0;
}

/* LISTAR */

void listar_livros() {

    if(contador == 0) {
        printf("\nNenhum livro cadastrado.\n");
        return;
    }

    printf("\n==================== LIVROS ====================\n");

    for(int i = 0; i < contador; i++) {
        printf("\nCodigo: %s | Nome: %s | Preco: %s | Estoque: %d | Vendidos: %d\n",
               livros[i][0],
               livros[i][1],
               livros[i][2],
               estoque[i],
               vendidos[i]);
    }
}

/* CADASTRO */

void cadastro_livros() {

    printf("\n==================== CADASTRO ====================\n");

    printf("Codigo: ");
    scanf("%99s", livros[contador][0]);

    printf("Nome: ");
    scanf(" %99[^\n]", livros[contador][1]);

    printf("Preco: ");
    scanf("%99s", livros[contador][2]);

    printf("Quantidade estoque: ");
    scanf("%d", &estoque[contador]);

    if(estoque[contador] < 0)
        estoque[contador] = 0;

    vendidos[contador] = 0;

    contador++;

    printf("\nLivro cadastrado!\n");
}

/* COMPRA */

void comprar_livro() {

    int tipo = login();

    if(tipo == 0) {
        printf("\nAcesso negado.\n");
        return;
    }

    char codigo[100];
    int quantidade;
    int encontrado = 0;

    listar_livros();

    printf("\nCodigo do livro: ");
    scanf("%99s", codigo);

    printf("Quantidade: ");
    scanf("%d", &quantidade);

    if(quantidade <= 0) {
        printf("\nQuantidade invalida.\n");
        return;
    }

    for(int i = 0; i < contador; i++) {

        int igual = 1;

        for(int j = 0; codigo[j] != '\0' || livros[i][0][j] != '\0'; j++) {
            if(codigo[j] != livros[i][0][j]) {
                igual = 0;
                break;
            }
        }

        if(igual == 1) {

            encontrado = 1;

            if(estoque[i] < quantidade) {
                printf("\nEstoque insuficiente.\n");
                return;
            }

            estoque[i] -= quantidade;
            vendidos[i] += quantidade;

            printf("\n==================== NOTA FISCAL ====================\n");

            printf("Tipo usuario: %s\n", (tipo == 1 ? "CLIENTE" : "VENDEDOR"));
            printf("Livro: %s\n", livros[i][1]);
            printf("Codigo: %s\n", livros[i][0]);
            printf("Quantidade: %d\n", quantidade);
            printf("Estoque restante: %d\n", estoque[i]);

            printf("\nCompra realizada com sucesso!\n");

            return;
        }
    }

    if(encontrado == 0) {
        printf("\nLivro nao encontrado.\n");
    }
}

/* BUSCAR (CLIENTE) */

void buscar_livro() {

    char busca[100];
    int achou = 0;

    printf("\nDigite nome ou codigo: ");
    scanf("%99s", busca);

    for(int i = 0; i < contador; i++) {

        int igual = 1;

        for(int j = 0; busca[j] != '\0' || livros[i][0][j] != '\0'; j++) {
            if(busca[j] != livros[i][0][j]) {
                igual = 0;
                break;
            }
        }

        if(igual == 1) {
            printf("\nENCONTRADO: %s | %s | Preco: %s | Estoque: %d\n",
                livros[i][0],
                livros[i][1],
                livros[i][2],
                estoque[i]);

            achou = 1;
        }
    }

    if(!achou)
        printf("\nLivro nao encontrado.\n");
}

/* RELATORIO (VENDEDOR) */

void relatorio() {

    int totalEstoque = 0;
    int totalVendidos = 0;

    printf("\n=========== RELATORIO ===========\n");

    for(int i = 0; i < contador; i++) {
        totalEstoque += estoque[i];
        totalVendidos += vendidos[i];
    }

    printf("Total de livros cadastrados: %d\n", contador);
    printf("Total em estoque: %d\n", totalEstoque);
    printf("Total vendidos: %d\n", totalVendidos);
}

/* MAIN */

int main() {

    printf("\n██╗     ██╗██████╗ ██████╗  █████╗ ██████╗ ██╗   ██╗\n");
    printf("██║     ██║██╔══██╗██╔══██╗██╔══██╗██╔══██╗╚██╗ ██╔╝\n");
    printf("██║     ██║██████╔╝██████╔╝███████║██████╔╝ ╚████╔╝ \n");
    printf("██║     ██║██╔══██╗██╔══██╗██╔══██║██╔══██╗  ╚██╔╝  \n");
    printf("███████╗██║██████╔╝██║  ██║██║  ██║██║  ██║   ██║   \n");
    printf("╚══════╝╚═╝╚═════╝ ╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝   ╚═╝   \n");

    printf("\n        LIVRARIA LIBRARY BEAUTIFY\n");
    printf("      Seu conhecimento comeca aqui!\n\n");

    int opcao;
    int tipoUsuario;

    while(1) {

        tipoUsuario = login();

        if(tipoUsuario == 0) {
            printf("\nLogin invalido.\n");
            continue;
        }

        while(1) {

            printf("\n==================== MENU ====================\n");

            if(tipoUsuario == 2) {
                printf("1 - Cadastrar Livros\n");
                printf("4 - Relatorio\n");
            }

            if(tipoUsuario == 1) {
                printf("4 - Buscar Livros\n");
            }

            printf("2 - Listar Livros\n");
            printf("3 - Comprar Livros\n");
            printf("9 - Trocar Usuario\n");
            printf("0 - Sair\n");

            printf("Opcao: ");
            scanf("%d", &opcao);

            if(opcao == 1 && tipoUsuario == 2) {
                cadastro_livros();
            }
            else if(opcao == 2) {
                listar_livros();
            }
            else if(opcao == 3) {
                comprar_livro();
            }
            else if(opcao == 4 && tipoUsuario == 1) {
                buscar_livro();
            }
            else if(opcao == 4 && tipoUsuario == 2) {
                relatorio();
            }
            else if(opcao == 9) {
                printf("\nVoltando para login...\n");
                break;
            }
            else if(opcao == 0) {
                printf("\nSistema encerrado.\n");
                return 0;
            }
            else {
                printf("\nOpcao invalida.\n");
            }
        }
    }
}