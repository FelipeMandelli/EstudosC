//Exercicios de Aula 1
#include <stdio.h>

int main(void) {
  int vetor[5], x = 0;
  while (x<5){
    printf("digite o %d valor:\n", x + 1);
    scanf("%d", &vetor[x]);
    x++;
  }
  for(x=0;x<5;x++){
    printf("Valor %d: %d\tEndereco: %p\n", x+1, vetor[x], &vetor[x]);
  }
  return 0;
}