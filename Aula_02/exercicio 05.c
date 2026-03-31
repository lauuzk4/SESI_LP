

/* Cálculo de Desconto
Leia o valor de uma compra:
Se for maior que R$100 → desconto de 10%
Caso contrário → desconto de 5%
Exiba o valor final.*/

#include <stdio.h>
int main() {
    float valor, desconto, valorfinal;
    
    printf("digite o valor da compra: ");
    scanf("%f", &valor);
    
    
    if(valor > 100){
        (desconto = 0.05 * valor);
    } else{
        (desconto = 0.10 * valor); }
        
    valorfinal= valor - desconto;
    
    printf("valor do desconto: %.2f\n", desconto);
    printf("valor da compra é: %.2f\n",valorfinal);
}


	





