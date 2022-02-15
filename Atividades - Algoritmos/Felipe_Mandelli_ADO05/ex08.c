#include<stdio.h>
#include<assert.h>


//[]-------------------------------------------------------------[]
//   Funcao: troque_posicao_par_por_impar()
//   Entrada: um apontador para o inicio do vetor v, seu tamanho n
//   Saida:   trocar os elementos de posicao par com os de posicao
//            impar consecutiva. 
//     ex.:  
//        entrada: [1,2,3,4]
//        saida:   [2,1,4,3]
//[]-------------------------------------------------------------[]
void troque_posicao_par_por_impar(int *v, int n){
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
   troque_posicao_par_por_impar(v, 4);
   float r = 0.0;
   r += testar(v[0], 2);
   r += testar(v[1], 1);
   r += testar(v[2], 4);
   r += testar(v[3], 3);
   return r/4.0;
}

float caso_de_teste02(){
   int v[1] = {1};
   troque_posicao_par_por_impar(v, 1);
   float r = 0.0;
   r += testar(v[0], 1);
   return r;
}

float caso_de_teste03(){
   int v[2] = {1, 2};
   troque_posicao_par_por_impar(v, 2);
   float r = 0.0;
   r += testar(v[0], 2);
   r += testar(v[1], 1);
   return r/2.0;
}

float caso_de_teste04(){
   int v[3] = {1, 2, 3};
   troque_posicao_par_por_impar(v, 3);
   float r = 0.0;
   r += testar(v[0], 2);
   r += testar(v[1], 1);
   r += testar(v[2], 3);
   return r/3.0;
}

float caso_de_teste05(){
   int v[5] = {1,2,3,4,5};
   troque_posicao_par_por_impar(v, 5);
   float r = 0.0;
   r += testar(v[0], 2);
   r += testar(v[1], 1);
   r += testar(v[2], 4);
   r += testar(v[3], 3);
   r += testar(v[4], 5);
   return r/5.0;   
}

float caso_de_teste06(){
   int v[6] = {1,2,3,4,5,6};
   troque_posicao_par_por_impar(v, 6);
   float r = 0.0;
   r += testar(v[0], 2);
   r += testar(v[1], 1);
   r += testar(v[2], 4);
   r += testar(v[3], 3);
   r += testar(v[4], 6);
   r += testar(v[5], 5);
   return r/6.0;   
}

float caso_de_teste07(){
   int v[7] = {1,2,3,4,5,6,7};
   troque_posicao_par_por_impar(v, 7);
   float r = 0.0;
   r += testar(v[0], 2);
   r += testar(v[1], 1);
   r += testar(v[2], 4);
   r += testar(v[3], 3);
   r += testar(v[4], 6);
   r += testar(v[5], 5);
   r += testar(v[6], 7);
   return r/7.0;   
}

float caso_de_teste08(){
   int v[8] = {1,2,3,4,5,6,7,8};
   troque_posicao_par_por_impar(v, 8);
   float r = 0.0;
   r += testar(v[0], 2);
   r += testar(v[1], 1);
   r += testar(v[2], 4);
   r += testar(v[3], 3);
   r += testar(v[4], 6);
   r += testar(v[5], 5);
   r += testar(v[6], 8);
   r += testar(v[7], 7);
   return r/8.0;   
}

float caso_de_teste09(){
   int v[9] = {1,2,3,4,5,6,7,8,9};
   troque_posicao_par_por_impar(v, 9);
   float r = 0.0;
   r += testar(v[0], 2);
   r += testar(v[1], 1);
   r += testar(v[2], 4);
   r += testar(v[3], 3);
   r += testar(v[4], 6);
   r += testar(v[5], 5);
   r += testar(v[6], 8);
   r += testar(v[7], 7);
   r += testar(v[8], 9);
   return r/9.0;   
}

float caso_de_teste10(){
   int v[10] = {1,2,3,4,5,6,7,8,9,10};
   troque_posicao_par_por_impar(v, 10);
   float r = 0.0;
   r += testar(v[0], 2);
   r += testar(v[1], 1);
   r += testar(v[2], 4);
   r += testar(v[3], 3);
   r += testar(v[4], 6);
   r += testar(v[5], 5);
   r += testar(v[6], 8);
   r += testar(v[7], 7);
   r += testar(v[8], 10);
   r += testar(v[9], 9);
   return r/10.0;   
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

   printf("exercicio 08\n");
   printf("sua nota foi: %.2f\n", r/10.0);
   return 0;
}
