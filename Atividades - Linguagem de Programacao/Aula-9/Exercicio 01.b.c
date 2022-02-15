//Exercicios de Aula 1.b
#include <stdio.h>
#include <malloc.h>

int main(void) {
  int *ponteiro, x = 0, *inicio;
  ponteiro = (int *)(malloc(5 * sizeof(int)));
  inicio = ponteiro;
  while (x<5){
    printf("digite o %d valor:\n", x + 1);
    scanf("%d", ponteiro);
    x++;
    ponteiro++;
  }
  ponteiro = inicio;
  for(x=0;x<5;x++){
    printf("%d Valor: %d\tEndereco: %p\n", x+1, *ponteiro, ponteiro);
    ponteiro++;
  }
  return 0;
}