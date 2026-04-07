#include <stdio.h>

void main(){
    
    int i = 1; 
    int soma = 0;
    
    do {
        soma = soma + i;
        printf("%i + ", i);
        
        i= i + 1;
    }while (i <= 10);
    
    printf(" = %i", soma);
}