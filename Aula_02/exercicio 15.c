

/* 15) Verificação de Maioridade para Votação
Leia a idade e informe:
Não pode votar (< 16)
Voto opcional (16–17 ou > 70)
Voto obrigatório (18–70)
*/

#include <stdio.h>
int main() {
	int idade;

	printf("digite sua idade: ");
	scanf("%i", &idade);

	if(idade < 16){
	    printf("Não pode votar.");
	} else if(idade >= 17 && idade >= 70){
	    printf("voto opcional.");
	} else (idade >= 18 && idade < 70); {
	    printf("voto obrigatório.");
	} 
}

