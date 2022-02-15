#include <stdio.h>

int main(void) {
 float w, x, y, z;
 printf("Digite os quatro valores\n");
 scanf("%f %f %f %f", &w, &x, &y, &z);
 printf("A media e: %.2f", (w + x + y + z)/4);
return 0;
}
//Media de quatro valores