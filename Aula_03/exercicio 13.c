#include <stdio.h>

int main() {
    int i = 1;
    int soma = 0;
  
    do {
      soma = soma + i;
      i = i + 2;
  }while (i <=100);
  printf("a soma dos imapres entre 1 e 100 é: %i",soma);
}