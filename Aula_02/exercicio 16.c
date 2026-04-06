/* Cálculo de Conta de Energia
Leia o consumo em kWh:
Até 100 → R$0,50/kWh
101 a 200 → R$0,75/kWh
Acima de 200 → R$1,00/kWh
Calcule o valor total.*/

#include <stdio.h>

int main(){
    float valor1, valorfinal;
    printf("digite o total de kWh usados: ");
    scanf("%f", &valor1);
    
    
    if(valor1<=100){
        (valorfinal= valor1 *0.50 );
    }else if(valor1<=200){
        (valorfinal= valor1 *0.75 );
    }else{
      (valorfinal= valor1 *1.00);
    }
    printf("o valor total a pagar é %.2f\n", valorfinal);
}

