#include <stdio.h>

void main(){
    int n;
    int i = 1;
    
    printf("escolha um numero:");
    scanf("%i", &n);
    
    do{
        printf("%i x %i = %i\n", n, i, n * i);
        
        i= i + 1;
    }while(i <= 10);
}