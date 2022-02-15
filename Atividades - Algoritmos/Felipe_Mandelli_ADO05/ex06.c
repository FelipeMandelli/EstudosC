#include<stdio.h>
#include<assert.h>

//[]-------------------------------------------------------------[]
//   Função: trocar()
//   Entrada: variaveis apontadas por a e b 
//   Saída:   a e b com os valores trocados
//[]-------------------------------------------------------------[]
void trocar(int *a, int *b){
	int aux = *a;
	*a = *b;
	*b = aux;
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
   int n1 = 10;
   int n2 = 20;
   trocar(&n1, &n2);
   float r = 0.0;
   r += testar(n1, 20);
   r += testar(n2, 10);
   return r/2.0;
}

float caso_de_teste02(){
   int v1[5] = {1,2,3,4,5};
   trocar(v1, (v1 + 4));
   float r = 0.0;
   r += testar(v1[0], 5);
   r += testar(*(v1 + 4), 1);
   return r/2.0;
}


float caso_de_teste03(){
   int n1 = 5;
   int n2 = 6;
   trocar(&n1, &n2);
   float r = 0.0;
   r += testar(n1, 6);
   r += testar(n2, 5);
   return r/2.0;
}


float caso_de_teste04(){
   int n1 = 3;
   int n2 = 4;
   trocar(&n1, &n2);
   float r = 0.0;
   r += testar(n1, 4);
   r += testar(n2, 3);
   return r/2.0;
}


float caso_de_teste05(){
   int n1 = 7;
   int n2 = 8;
   trocar(&n1, &n2);
   float r = 0.0;
   r += testar(n1, 8);
   r += testar(n2, 7);
   return r/2.0;
}


float caso_de_teste06(){
   int n1 = 4;
   int n2 = 2;
   trocar(&n1, &n2);
   float r = 0.0;
   r += testar(n1, 2);
   r += testar(n2, 4);
   return r/2.0;
}


float caso_de_teste07(){
   int v1[5] = {1,2,3,4,5};
   trocar((v1 + 1), (v1 + 3));
   float r = 0.0;
   r += testar(v1[1], 4);
   r += testar(*(v1 + 3), 2);
   return r/2.0;
}


float caso_de_teste08(){
   int n1 = 8;
   int n2 = 4;
   trocar(&n1, &n2);
   float r = 0.0;
   r += testar(n1, 4);
   r += testar(n2, 8);
   return r/2.0;
}


float caso_de_teste09(){
   int n1 = 4;
   int n2 = 0;
   trocar(&n1, &n2);
   float r = 0.0;
   r += testar(n1, 0);
   r += testar(n2, 4);
   return r/2.0;
}


float caso_de_teste10(){
   int n1 = 17;
   int n2 = 20;
   trocar(&n1, &n2);
   float r = 0.0;
   r += testar(n1, 20);
   r += testar(n2, 17);
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

   printf("exercicio 06\n");
   printf("sua nota foi: %.2f\n", r/10.0);
   return 0;
}
