/*20) Sistema de Multa de Trânsito
Leia a velocidade de um carro:
Até 60 km/h → sem multa
61–80 → multa leve
81–100 → multa grave
Acima de 100 → multa gravíssima
*/

#include <stdio.h>

int main(){
   float velocidade;

	printf("digite a velocidade: ");
	scanf("%f", &velocidade);

	if(velocidade <= 60){
	    printf("sem multa");
	} else if(velocidade <= 80){
	    printf("multa leve");
	} else if(velocidade <= 100) {
	    printf("multa grave");
	} else {
	    printf("multa gravíssima");
	}
}

    