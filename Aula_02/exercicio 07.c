

/* VerificaC'C#o de TriC"ngulo
Leia trC*s valores e verifique se podem formar um triC"ngulo.
Caso formem, classifique como:
EquilC!tero
IsC3sceles
Escaleno */

#include <stdio.h>
int main() {
	float a, b, c;

	printf("digite o lado A do triangulo: ");
	scanf("%f", &a);

	printf("digite o lado B do triangulo: ");
	scanf("%f", &b);

    printf("digite o lado C do triangulo: ");
    scanf("%f", &c);
    
    if(a==b && a==c){
    printf("É um trinagulo Equilatero.");
    } else if(a==b || a==c || b==c){
        printf("É um triangulo isosceles.");
    } else
    printf("É um triangulo escaleno.");
}







