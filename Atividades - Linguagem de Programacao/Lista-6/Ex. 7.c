//Fatorial
#include <stdio.h>

int main (void){
  int x, z, a = 1;
  printf("Digite um valor inteiro:\t");
  scanf("%d", &x);
  while ( x > 1){
    z = x * (x-1);
    a = z * a;
    x = x - 2;
  }
  printf("O fatorial e = %d", a);
   return 0;
}