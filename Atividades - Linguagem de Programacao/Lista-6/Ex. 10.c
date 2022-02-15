//Soma de 1/1 + 3/2 .... 99/50
#include <stdio.h>

int main (void){
  double soma = 0, divisao, numerador = 1, denominador = 1;
  while (denominador <= 50){
    divisao = (numerador)/(denominador);
    soma = soma + divisao;
    numerador = numerador + 2;
    denominador++;
    //printf("%.2f\t", soma);
  }
  printf("\nO valor Calculado foi: %.2f", soma);
  return 0;
}