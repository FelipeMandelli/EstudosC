#include <stdio.h>

int main(void) {
float premio;
printf("Valor do Premio:\n");
scanf("%f", &premio);
printf("Primeiro lugar recebe: %.1f reais\nSegundo lugar recebe: %.1f reais\nTerceiro lugar recebe: %.1f reais", 0.46*premio, 0.32*premio, 0.22*premio);
return 0;
}
/*Premios*/