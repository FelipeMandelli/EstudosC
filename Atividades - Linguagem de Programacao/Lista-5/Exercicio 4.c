#include <stdio.h>

int main(void) {
  unsigned int x, y, z;
  printf("Digite tres valores inteiros e positivos\n");
  scanf("%d %d %d", &x, &y, &z);
  printf("Qual o tipo de media a ser aplicada?\n1 para Geometrica\n2 para Ponderada\n3 para Harmonica\n4 para Aritmetica\n");
  float a;
  scanf("%f", &a);
  if (a == 1) {
    printf("A media Geometria entre %d, %d e %d fica: %.2f", x, y, z, (float)(x*y*z));
  }
  if (a == 2){
    printf("A media Ponderada entre %d, %d e %d fica: %.2f", x, y, z, (float)((x + 2*y + 3*z)/6));
  }
  if (a == 3){
    printf("A media Harmonica entre %d, %d e %d fica: %.2f", x, y, z, (float)(1/(1/x + 1/y + 1/z)));
  }
  if (a == 4){
    printf("Amedia Aritmetica entre %d, %d e %d fica: %.2f", z, y, z, (float)((x + y + z)/3));
  }
  return 0;
}
//Medias