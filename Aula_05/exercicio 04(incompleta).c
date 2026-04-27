/*4) Leia 6 números e mostre o maior valor.*/


#include <stdio.h>

int main()
{   
    int numeros[6];
    int maior_valor = 0;
    
    for(int i=0; i<8;i++){
        printf("digite o numero %i: ", i+1);
        scanf("%i", &numeros[i]);
    }
   
   for(int x=0;x<6;x++){ 
    if(numeros[x] > maior_valor){
      printf("numero %i e o maior valor", x++);
    } else{
        maior_valor++;
    }
   }
 
}