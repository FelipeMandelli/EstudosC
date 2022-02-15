#include <stdio.h>
#include <math.h>
#define pi (3.141592)

int main(void) {
float r, h;
printf("Qual o raio e a altura em metros?\n");
scanf("%f %f", &r, &h);
float ab = pi * pow(r,2);
printf("A area da base e: %.3f\nE o volume e: %.3f\n", ab, ab*h);
return 0;
}
/*Area e Volume de Cilindro*/