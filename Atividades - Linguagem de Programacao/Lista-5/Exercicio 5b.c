#include <stdio.h>

int main(void) {
  unsigned int m;
  printf("Qual o numero do mes?\n");
  scanf("%d", &m);
  switch (m){
    case 1:
    printf("O primeiro mes e Janeiro\n");
    break;
    case 2:
    printf("O segundo mes e Fevereiro\n");
    break;
    case 3:
    printf("O terceiro mes e Marco\n");
    break;
    case 4:
    printf("O quarto mes e Abril\n");
    break;
    case 5:
    printf("O quinto mes e Maio\n");
    break;
    case 6:
    printf("O sexto mes e Junho\n");
    break;
    case 7:
    printf("O setimo mes e Julho\n");
    break;
    case 8:
    printf("O oitavo mes e Agosto\n");
    break;
    case 9:
    printf("O nono mes e Setembro\n");
    break;
    case 10:
    printf("O decimo mes e Outubro\n");
    break;
    case 11:
    printf("O decimo primeiro mes e Novembro\n");
    break;
    case 12:
    printf("O decimo segundo mes e Dezembro\n");
    break;
    default:
    printf("so tem 12 meses no ano");
  }
  return 0;
}
//Meses B