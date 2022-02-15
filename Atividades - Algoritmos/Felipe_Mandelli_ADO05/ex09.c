#include<stdio.h>
#include<assert.h>


//[]-------------------------------------------------------------[]
//   Funcao: encontre_maior_menor()
//   Entrada: um apontador para o inicio do vetor v, seu tamanho n
//            um apontador para armazenar o maior elemento do vetor
//            e outro para armazenar o menor.           
//   Saida:   maior elemento do vetor
//            menor elemento do vetor
//     ex.:  
//        entrada: [1,2,3,4]
//        saida:   maior = 4, menor = 1 
//[]-------------------------------------------------------------[]
void encontre_maior_menor(int *v, int n, int *maior, int *menor){
	// coloque o seu codigo aqui
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
   int maior, menor;
   encontre_maior_menor(v, 4, &maior, &menor);
   float r = 0.0;
   r += testar(maior, 4);
   r += testar(menor, 1);
   return r/2.0;
}

float caso_de_teste02(){
   int v[4] = {-1,-2,-3,-4};
   int maior, menor;
   encontre_maior_menor(v, 4, &maior, &menor);
   float r = 0.0;
   r += testar(maior, -1);
   r += testar(menor, -4);
   return r/2.0;
}

float caso_de_teste03(){
   int v[4] = {2,1,3,4};
   int maior, menor;
   encontre_maior_menor(v, 4, &maior, &menor);
   float r = 0.0;
   r += testar(maior, 4);
   r += testar(menor, 1);
   return r/2.0;
}

float caso_de_teste04(){
   int v[4] = {4,3,2,1};
   int maior, menor;
   encontre_maior_menor(v, 4, &maior, &menor);
   float r = 0.0;
   r += testar(maior, 4);
   r += testar(menor, 1);
   return r/2.0;
}

float caso_de_teste05(){
   int v[4] = {2,4,6,8};
   int maior, menor;
   encontre_maior_menor(v, 4, &maior, &menor);
   float r = 0.0;
   r += testar(maior, 8);
   r += testar(menor, 2);
   return r/2.0;
}

float caso_de_teste06(){
   int v[4] = {3,6,9,12};
   int maior, menor;
   encontre_maior_menor(v, 4, &maior, &menor);
   float r = 0.0;
   r += testar(maior, 12);
   r += testar(menor, 3);
   return r/2.0;
}

float caso_de_teste07(){
   int v[4] = {1,1,1,1};
   int maior, menor;
   encontre_maior_menor(v, 4, &maior, &menor);
   float r = 0.0;
   r += testar(maior, 1);
   r += testar(menor, 1);
   return r/2.0;
}

float caso_de_teste08(){
   int v[8] = {1,2,3,4,5,6,7,8};
   int maior, menor;
   encontre_maior_menor(v, 8, &maior, &menor);
   float r = 0.0;
   r += testar(maior, 8);
   r += testar(menor, 1);
   return r/2.0;
}

float caso_de_teste09(){
   int v[9] = {1,2,3,4,5,6,7,8,9};
   int maior, menor;
   encontre_maior_menor(v, 9, &maior, &menor);
   float r = 0.0;
   r += testar(maior, 9);
   r += testar(menor, 1);
   return r/2.0;
}

float caso_de_teste10(){
   int v[10] = {1,2,3,4,5,6,7,8,9,10};
   int maior, menor;
   encontre_maior_menor(v, 10, &maior, &menor);
   float r = 0.0;
   r += testar(maior, 10);
   r += testar(menor, 1);
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
