/*17) Classificação de Temperatura
Leia uma temperatura:
Frio (< 15°C)
Agradável (15–25°C)
Quente (> 25°C)*/

#include <stdio.h>

int main(){
  float temperatura;

	printf("digite a temperatura: ");
	scanf("%f", &temperatura);

	if(temperatura < 15){
	    printf("Esta frio.");
	} else if(temperatura <= 25){
	    printf("o clima esta agradavel.");
	} else (temperatura > 25); {
	    printf("esta quente. ");
	} 
}