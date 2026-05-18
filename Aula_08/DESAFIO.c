#include <stdio.h>


char livros[100][3][100];
int contador = 0;



void listar_livros() {
    for(int i = 0; i < contador; i++) {
        printf("Codigo: %s | Nome: %s | Preço: %s\n",
               livros[i][0],
               livros[i][1],
               livros[i][2]);
    }
}

void cadastro_livros() {

    printf("Digite o código do livro: ");
    scanf(" %99s", livros[contador][0]);

    printf("Digite o nome do livro: ");
    scanf(" %99[^\n]", livros[contador][1]);
 
     printf("Digite o preço do livro: ");
    scanf(" %99[^\n]", livros[contador][2]);
    
    contador++;
}

int main() {

	int opcao;
	do {
		printf("\n ======================================= \n");
		printf("           SISTEMA DE LIVRARIA\n");
		printf(" =======================================\n");

		printf(" 1 - Cadastrar Livros ");
		printf("\n 2 - Listar Livros ");
		printf("\n 3 - Comprar Livros ");
		printf("\n 0 - Sair ");

		printf("\n =======================================\n");

		printf(" Digite a opção escolhida: ");
		scanf("%i", &opcao);
		printf(" =======================================\n\n\n");

		if(opcao == 1) {
			cadastro_livros(contador);

		} else if(opcao == 2) {
			listar_livros();
		}
	} while(opcao != 0);
}