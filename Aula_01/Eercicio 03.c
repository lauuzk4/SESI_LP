#include <stdio.h>
int main(){
    float n1, n2, n3, media;
    
    printf("digite uma nota: ");
    scanf("%f", &n1);
    
    printf("digite a proxima nota: ");
    scanf("%f", &n2);
    
    printf("digite a ultima nota: ");
    scanf("%f", &n3);
    
    media = (n1 + n2 + n3)/3;
    
    if(media >= 7.0){;
        printf("aprovado");
    } else if(media <=2.9){
        printf("reprovado");
    } else{
        printf("recuperação");
    }
    
    
    
    
    
    
}
   
