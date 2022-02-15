#include <stdio.h>

int main(void) {
  int x;
  printf("Escreva um numero\n");
  scanf("%d", &x);
  printf("Seu antecessor e: %d\nSeu sucessor e: %d", x-1, x++);
  return 0;
}
//Antecessor e Sucessor