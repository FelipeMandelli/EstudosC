#include<stdio.h>

//[]-------------------------------------------------------------[]
//   Função: soma_produto()
//   Entrada: a e b do tipo inteiro
//   Saída:   soma e produto entre a e b
//[]-------------------------------------------------------------[]
void soma_produto(int a, int b, int *soma, int *produto){
  	*soma = a + b;
  	*produto = a * b;
}


//[]-------------------------------------------------------------[]
//   Função: testar()
//   Entrada: valor obtido da funcao, valor esperado
//   Saída: ok se obtido igual a esperado e nao ok caso contrario
//[]-------------------------------------------------------------[]
float testar(int obtido, int esperado){
   float resultado;
   if (obtido == esperado){
	   printf("Parabéns !!!");
           resultado = 1.0;  
   } else {
	   printf("Ainda não !!!");
           resultado = 0.0;  
   }
   printf(" obtido: %d  esperado: %d\n", obtido, esperado);
   return resultado;
}

//[]-------------------------------------------------------------[]
//    Casos de testes
//[]-------------------------------------------------------------[]
float caso_de_teste01(){
   int s, p;
   soma_produto(6, 2, &s, &p);
   float r = 0;
   r += testar(s, 8);
   r += testar(p, 12);
   return r/2.0;
}

float caso_de_teste02(){
   int s, p;
   soma_produto(3, 2, &s, &p);
   float r = 0;
   r += testar(s, 5);
   r += testar(p, 6);
   return r/2.0;
}

float caso_de_teste03(){
   int s, p;
   soma_produto(4, 5, &s, &p);
   float r = 0;
   r += testar(s, 9);
   r += testar(p, 20);
   return r/2.0;
}

float caso_de_teste04(){
   int s, p;
   soma_produto(6, 6, &s, &p);
   float r = 0;
   r += testar(s, 12);
   r += testar(p, 36);
   return r/2.0;
}

float caso_de_teste05(){
   int s, p;
   soma_produto(7, 8, &s, &p);
   float r = 0;
   r += testar(s, 15);
   r += testar(p, 56);
   return r/2.0;
}

float caso_de_teste06(){
   int s, p;
   soma_produto(30, 2, &s, &p);
   float r = 0;
   r += testar(s, 32);
   r += testar(p, 60);
   return r/2.0;
}

float caso_de_teste07(){
   int s, p;
   soma_produto(0, 0, &s, &p);
   float r = 0;
   r += testar(s, 0);
   r += testar(p, 0);
   return r/2.0;
}

float caso_de_teste08(){
   int s, p;
   soma_produto(10, 2, &s, &p);
   float r = 0;
   r += testar(s, 12);
   r += testar(p, 20);
   return r/2.0;
}

float caso_de_teste09(){
   int s, p;
   soma_produto(3, 5, &s, &p);
   float r = 0;
   r += testar(s, 8);
   r += testar(p, 15);
   return r/2.0;
}

float caso_de_teste10(){
   int s, p;
   soma_produto(4, 7, &s, &p);
   float r = 0;
   r += testar(s, 11);
   r += testar(p, 28);
   return r/2.0;
}


//[]-------------------------------------------------------------[]
//    programa principal
//[]-------------------------------------------------------------[]
int main(){
   float r = 0.0;
   r += caso_de_teste01(); 
   r += caso_de_teste02(); 
   r += caso_de_teste03(); 
   r += caso_de_teste04(); 
   r += caso_de_teste05(); 
   r += caso_de_teste06(); 
   r += caso_de_teste07(); 
   r += caso_de_teste08(); 
   r += caso_de_teste09(); 
   r += caso_de_teste10(); 

   printf("exercicio 03\n");
   printf("sua nota foi: %.2f\n", r/10.0);
   return 0;
}
