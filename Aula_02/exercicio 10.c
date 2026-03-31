

/* 10) Cálculo de IMC
Leia peso e altura e calcule o IMC.
Classifique:
Abaixo do peso (< 18.5)
Normal (18.5–24.9)
Sobrepeso (25–29.9)
Obesidade (≥ 30) */

#include <stdio.h>
int main() {
	
	  float peso, altura, imc;

    printf("digite seu peso: ");
    scanf("%f", &peso);
    
     printf("digite sua altura: ");
    scanf("%f", &altura);
    
    imc = peso/(2*altura) ;
 
    if (imc <=18.5) {
        printf("Abaixo do peso");
    } else if (imc <=24.9) {
        printf("normal");
    } else if (imc <=29.9) {
        printf("sobrepeso");
    } else {
        printf("obesidade"); }

    
    
}