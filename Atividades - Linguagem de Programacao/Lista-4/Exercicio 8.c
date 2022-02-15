#include <stdio.h>
#define pi (3.14159)

int main(void) {
float g;
printf("Angulo em graus:\n");
scanf("%f", &g);
printf("Angulo em radianos: %.4frad", g * pi/ 180);
}
/*Graus para Radianos*/