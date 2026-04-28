/*9) Leia 10 números e substitua os negativos por zero.*/


#include <stdio.h>

int main()
{   
    int numeros[10];
    int negativo = 0;
    int i = 0;
    
    for(int i = 0; i < 10; i++){
        printf("digite o número %i:", i +1);
        scanf("%i", &numeros[i]);
    }
    for(int i = 0; i < 10; i++){
        if(numeros[i] < 0)
        numeros[i] = negativo;
     printf("\n os numeros digitados são: %i === %i", i+1, numeros[i]);
        
    }
    
 
    
    
    
}
