/*10) Leia 10 números e ordene o vetor em ordem crescente*/

#include <stdio.h>

int main() {
    int numeros[10];
    int i;
    int j;
    int temp;

    for(i = 0; i < 10; i++) {
        printf("Digite o número %i: ", i +1);
        scanf("%i", &numeros[i]);
    }


    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 9; j++) { 
            if(numeros[j] > numeros[j +1]) {
                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

 
    printf("\nNúmeros em ordem crescente:");
    for(i = 0; i < 10; i++) {
        printf("%i \n", numeros[i]);
    }

}