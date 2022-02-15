#include<stdio.h>
#include<assert.h>


//[]-------------------------------------------------------------[]
//   Funcao: soma_elementos()
//   Entrada: um apontador para o inicio do vetor v, seu tamanho n
//            um apontador para armazenar a soma dos elemento pares
//            e outro para armazenar soma dos elementos impares.
//   Saida:   soma dos elementos pares
//            soma dos elementos impares
//     ex.:
//        entrada: [1,2,3,4]
//        saida:   soma_par = 6, soma_impar = 4
//[]-------------------------------------------------------------[]
void soma_elementos(int *v, int n, int *soma_par, int *soma_impar){

for(int i=0; i<n;i++){
  if(v[i]%2 ==0){
    
    *soma_par += v[i];
  }else{
    if(v[i]%2 != 0 )
    
    *soma_impar += v[i];
  }
}
}


//[]-------------------------------------------------------------[]
//   Funcao: r += testar()
//   Entrada: valor obtido da funcao, valor esperado
//   Saida: ok se obtido igual a esperado e nao ok caso contrario
//[]-------------------------------------------------------------[]
float testar (int obtido, int esperado){
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
   int v[4] = {1,2,3,4};
   int soma_par, soma_impar;
   soma_elementos(v, 4, &soma_par, &soma_impar);
   float r = 0.0;
   r += testar(soma_par, 6);
   r += testar(soma_impar, 4);
   return r/2.0;
}

float caso_de_teste02(){
   int v[4] = {-1,-2,-3,-4};
   int soma_par, soma_impar;
   soma_elementos(v, 4, &soma_par, &soma_impar);
   float r = 0.0;
   r += testar(soma_par, -6);
   r += testar(soma_impar, -4);
   return r/2.0;
}

float caso_de_teste03(){
   int v[4] = {2,1,3,4};
   int soma_par, soma_impar;
   soma_elementos(v, 4, &soma_par, &soma_impar);
   float r = 0.0;
   r += testar(soma_par, 6);
   r += testar(soma_impar, 4);
   return r/2.0;
}

float caso_de_teste04(){
   int v[4] = {4,3,2,1};
   int soma_par, soma_impar;
   soma_elementos(v, 4, &soma_par, &soma_impar);
   float r = 0.0;
   r += testar(soma_par, 6);
   r += testar(soma_impar, 4);
   return r/2.0;
}

float caso_de_teste05(){
   int v[4] = {2,4,6,8};
   int soma_par, soma_impar;
   soma_elementos(v, 4, &soma_par, &soma_impar);
   float r = 0.0;
   r += testar(soma_par, 20);
   r += testar(soma_impar, 0);
   return r/2.0;
}

float caso_de_teste06(){
   int v[4] = {3,6,9,12};
   int soma_par, soma_impar;
   soma_elementos(v, 4, &soma_par, &soma_impar);
   float r = 0.0;
   r += testar(soma_par, 18);
   r += testar(soma_impar, 12);
   return r/2.0;
}

float caso_de_teste07(){
   int v[4] = {1,1,1,1};
   int soma_par, soma_impar;
   soma_elementos(v, 4, &soma_par, &soma_impar);
   float r = 0.0;
   r += testar(soma_par, 0);
   r += testar(soma_impar, 4);
   return r/2.0;
}

float caso_de_teste08(){
   int v[8] = {1,2,3,4,5,6,7,8};
   int soma_par, soma_impar;
   soma_elementos(v, 8, &soma_par, &soma_impar);
   float r = 0.0;
   r += testar(soma_par, 20);
   r += testar(soma_impar, 16);
   return r/2.0;
}

float caso_de_teste09(){
   int v[9] = {1,2,3,4,5,6,7,8,9};
   int soma_par, soma_impar;
   soma_elementos(v, 9, &soma_par, &soma_impar);
   float r = 0.0;
   r += testar(soma_par, 20);
   r += testar(soma_impar, 25);
   return r/2.0;
}

float caso_de_teste10(){
   int v[10] = {1,2,3,4,5,6,7,8,9,10};
   int soma_par, soma_impar;
   soma_elementos(v, 10, &soma_par, &soma_impar);
   float r = 0.0;
   r += testar(soma_par, 30);
   r += testar(soma_impar, 25);
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

   printf("exercicio 09\n");
   printf("sua nota foi: %.2f\n", r/10.0);
   return 0;
}
