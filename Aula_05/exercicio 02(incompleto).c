/*2) Leia 10 números e mostre apenas os números pares.*/


#include <stdio.h>

int main()
{   
    int numeros[10];
    int num_par=0;
    
    for(int i=0; i<10; i++){
        printf("digite o número %i: ", i +1);
        scanf("%i",&numeros[i]);
    }
    
    for(int x=0; x<10; x++){
    if(numeros[i] % 2 == 0);
    num_par++;
    }
 
}