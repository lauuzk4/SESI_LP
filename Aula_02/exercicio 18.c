/*18) Verificação de Ano de Eleição
Leia um ano e informe se é ano de eleição (múltiplo de 4).
*/

#include <stdio.h>

int main(){
 int ano;
   
   printf("digite o ano: ");
   scanf("%i", &ano);
   
   if(ano < 366) {
    printf("não é ano de eleição");
   } else {
       printf("é ano de eleição");
   }
    
}