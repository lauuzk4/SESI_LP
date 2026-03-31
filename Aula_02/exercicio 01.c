

/* 1) Classificação de Idade
Leia a idade de uma pessoa e informe:
Criança (0–12)
Adolescente (13–17)
Adulto (18–59)
Idoso (60+) */

#include <stdio.h>
int main(){
 
   //declaração
    int idade;

    //Saída de dados
    printf("digite a sua idade: ");
    //entrada de dados
    scanf("%i", &idade);
    
    //verificação
    if (idade <=12) {
    printf("Criança");
    } else if (idade <=17) {
    printf("Adolescente");
    } else if (idade <=59) {
    printf("Adulto");
    } else {
    printf("Idoso"); }

    
    
}