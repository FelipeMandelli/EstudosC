//Valor e Endereco
#include <stdio.h>

int main(void) {
  int a;
  int *p;
  a = 50;
  p = &a;
  printf("Valor de a: %d\n", a);
  printf("Valor de a: %d\n", *p);
  printf("Endereco de a: %p\n", &a);
  printf("Endereco de a: %p\n", p);
  return 0;
}