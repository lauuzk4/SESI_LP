#include <stdio.h>

int main() {
    int n, i, j;

    printf("Digite o tamanho do lado do quadrado: ");
    scanf("%d", &n);

    printf("\n"); 
   
    for (i = 0; i < n; i++) {
        
        
        for (j = 0; j < n; j++) {
            printf("* ");
        }
        
        printf("\n");
    }

    return 0;
}