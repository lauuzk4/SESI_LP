/*6) Leia 10 números e conte quantos são positivos.*/


#include <stdio.h>

int main()
{   
    int numeros[10];
    int positivo = 0;
    int num_pos = 0;
    int i = 0;
    
    
    for(int i=0; i < 10; i++){
        printf("digite o número %i: ", i +1);
        scanf("%i",&numeros[i]);
    }
   
   
    for(int i = 0; i < 10; i++){
    if(numeros[i] >= 0){
        num_pos = numeros[i];
        printf("\n os números positivos são: %i === %i", i +1 , num_pos);
    }
  }
}
