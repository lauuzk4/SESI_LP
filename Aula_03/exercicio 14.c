#include <stdio.h>

void main(){
  
   int n;
   
   printf("digite um numero: ");
   scanf("%i", &n);
   
   for (n <= 0;n = n - 1;){
       printf("a contagem até zero é: %i \n", n);
   }
}
   