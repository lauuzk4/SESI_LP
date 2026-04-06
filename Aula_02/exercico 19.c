/*19) Cálculo de Frete
Leia o peso de uma encomenda:
Até 5kg → R$10
5 a 20kg → R$20
Acima de 20kg → R$50
*/

#include <stdio.h>

int main(){
    float valor1, valorfinal;
    printf("digite quantos kg tem a encomenda: ");
    scanf("%f", &valor1);
    
    
    if(valor1<=5){
        (valorfinal= valor1 *10.00 );
    }else if(valor1>20){
        (valorfinal= valor1 *50.00 );
    }else{
      (valorfinal= valor1 *20.00);
    }
    printf("o valor total a pagar é %.2f\n", valorfinal);
}

    