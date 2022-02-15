//Incremento com ponteiro
#include <stdio.h>

void t(int *u){
  *u = *u +1;
}

int main(void) {
  int x=10;
  t(&x);
  printf("x = %d\n", x);
  return 0;
}