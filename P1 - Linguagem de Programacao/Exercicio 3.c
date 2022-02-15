/*3.	(1,0) Faça um programa que receba do usuário um número N e calcule a seguinte soma:
a.	Soma = 1/1! + 1/2! + 1/3! ... + 1/N!*/
#include <stdio.h>

int main (void){
  float n, controle = 1, soma = 0, valor, fatorial =1;
  printf("Digite o numero de N:\n");
  scanf("%f", &n);
  while (controle <= n){
    fatorial = controle * fatorial;
    valor = 1/fatorial;
    soma = soma + valor;
    controle = controle + 1;
  }
  printf(" \n\tO valor calculado foi: %.3f\n", soma);
  return 0;
}
