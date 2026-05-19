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

	printf("Digite o Código do Livro: ");
	scanf(" %99s", livros[contador][0]);

	printf("Digite o Nome do Livro: ");
	scanf(" %99[^\n]", livros[contador][1]);

	printf("Digite o Preço do Livro: ");
	scanf(" %99[^\n]", livros[contador][2]);

	contador++;
}

void comprar_livro() {

	char codigo[100];
	int encontrado = 0;

	printf("\n============ LIVROS DISPONIVEIS ============\n");
	listar_livros();

	printf("\nDigite o Código do Livro que deseja Comprar: ");
	scanf(" %99s", codigo);

	for(int i = 0; i < contador; i++) {

		int igual = 1;

		for(int j = 0; codigo[j] != '\0' || livros[i][0][j] != '\0'; j++) {

			if(codigo[j] != livros[i][0][j]) {
				igual = 0;
				break;
			}
		}

		if(igual == 1) {

			printf("\n============ COMPRA REALIZADA ============\n");
			printf("Livro: %s\n", livros[i][1]);
			printf("Preço: R$ %s\n", livros[i][2]);

			encontrado = 1;
			break;
		}
	}

	if(encontrado == 0) {
		printf("\nLivro não encontrado.\n");
	}
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

		printf(" Digite a Opção Escolhida: ");
		scanf("%i", &opcao);
		printf(" =======================================\n\n\n");

		if(opcao == 1) {
			cadastro_livros(contador);

		} else if(opcao == 2) {
			listar_livros();

		} else if(opcao == 3) {
			comprar_livro();
		}
		
	} while(opcao != 0);
}