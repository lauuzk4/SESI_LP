#include <stdio.h>

void main(){
    
   int i = 2;
   int pares = 0;
   
   do {
       pares = pares + 1;
       i= i + 2;
       
   }while(i <=50);
   
    printf ("total de pares entre 1 e 50 é: %i", pares);
}
