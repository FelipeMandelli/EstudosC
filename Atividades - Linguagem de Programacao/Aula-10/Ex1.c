//Uso de estruturas para registro
#include <stdio.h>
struct registro {
  char nome[50];
  int idade;
  char endereco[100];
};

int main(void) {
  struct registro cidadao;
  printf("Bem Vindo(a) ao seu Registro\nDigite seu nome: ");
  setbuf(stdin,NULL);
  fgets(cidadao.nome,20,stdin);
  printf("Qual a sua idade? ");
  scanf("%d", &cidadao.idade);
  printf("Onde voce mora? ");
  setbuf(stdin,NULL);//Limpeza do Teclado
  fgets(cidadao.endereco,100,stdin); /*Para usar o fgets para ler*/
  printf("\n\nNome: %sIdade: %d\nEndereco: %s", cidadao.nome, cidadao.idade,cidadao.endereco);
  return 0;
}