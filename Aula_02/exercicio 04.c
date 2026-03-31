

/* VerificaC'C#o de AprovaC'C#o
Leia a nota de um aluno (0 a 10).
Informe:
Aprovado (nota >= 7)
RecuperaC'C#o (nota entre 5 e 6.9)
Reprovado (nota < 5)*/

#include <stdio.h>
int main() {
	float nota;

	printf("digite a nota de 0 a 10: ");
	scanf("%f", &nota);

	if(nota >= 7){
	    printf("aluno está Aprovado. ");
	} else if(nota >= 5){
	    printf("aluno está em recuperção.");
	} else {
	    printf("aluno reprovado.");
	}




}






