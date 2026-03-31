

/* 12) Cálculo de Salário com Bônus
Leia o salário:
Se maior que 3000 → bônus de 5%
Caso contrário → bônus de 10%
Exiba o salário final.*/

#include <stdio.h>
int main() {
	
	  float salario, bonus, salariofinal;
    
    printf("digite o valor do salario: ");
    scanf("%f", &salario);
    
    
    if(salario > 3000){
        (bonus = 0.05 * salario);
    } else{
        (bonus = 0.10 * salario); }
        
    salariofinal= salario + bonus;
    
    printf("valor do bonus: %.2f\n",bonus);
    printf("valor do seu salario total é: %.2f\n",salariofinal);
}

