#include <stdio.h>

void main() {
	int n;
	int n2;
	int i = 1;

	printf("digite um numero:");
	scanf("%i", &n);

    printf("digite outro numero:");
    scanf("%i", &n2);


	for (int i = n; i <= n2; i = i+1 ) {
		printf("%i \n", i);

	}
}