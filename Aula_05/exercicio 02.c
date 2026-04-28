/*2) Leia 10 números e mostre apenas os números pares.*/


#include <stdio.h>

int main()
{   
    int numeros[10];
    int num_par=0;
    int par = 0;
    int num_impar;
    int impar = 0;
    int i = 0;
    
    
    for(int i=0; i<10; i++){
        printf("digite o número %i: ", i +1);
        scanf("%i",&numeros[i]);
    }
    
    for(int i=0; i<10; i++){
    if(numeros[i] % 2 == 0){
        num_par = numeros[i];
        par ++;
        printf("\n os números pares são: %i === %i", i +1, num_par);
    } else {
        num_impar = numeros[i];
        impar++;
    }
    
   
    
    }
}