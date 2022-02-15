#include <stdio.h>

int main(void) {
  char a;
  int b;
  float c;
  printf("Digite um caractere, um inteiro e um real\n");
  scanf("%c", &a);
  scanf("%d", &b);
  scanf("%f", &c);
  printf("por espacos: %c %d %.2f\n", a, b, c);
  printf("por tabulacao horizontal: \t%c\t%d\t%.2f\n", a, b, c);
  printf("por linha:\n%c\n%d\n%.2f", a, b, c);
  return 0;
}
/*formas de escrita*/