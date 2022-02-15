#include<stdio.h>
#include<math.h>
#include<assert.h>

//[]-------------------------------------------------------------[]
//   Funcao: raizes()
//   Entrada: termos da equação de segundo grau (a, b, c)
//   Saida:   
//       valor de retorno: número de raízes reais e distintas da 
//                         equação
//                         Se existirem raizes rais, seus valores
//                         devem ser armazenados nas variáveis 
//                         apontadas por x1 e x2.
//[]-------------------------------------------------------------[]
int raizes(float a, float b, float c, float *x1, float *x2){
   float delta = (pow(b,2) - (4*a*c));
   int numeroRaizes = 0;
   
   if (sqrt(delta) == 0){
   	*x1 = (-b) / (2 * a);
   	numeroRaizes = 1;
   }
   
   if (sqrt(delta) < 0){
   	numeroRaizes = 0;
   }
   
   if (sqrt(delta) > 0){
   	*x1 = ((-b) + sqrt(delta)) / (2 * a);
   	*x2 = ((-b) - sqrt(delta)) / (2 * a);
   	numeroRaizes = 2;
   }
   
  return numeroRaizes;
}


//[]-------------------------------------------------------------[]
//   Funcao: testar ()
//   Entrada: valor obtido da funcao, valor esperado
//   Saida: ok se obtido igual a esperado e nao ok caso contrario
//[]-------------------------------------------------------------[]
float testar (float obtido, float esperado){
   float resultado;
   if (fabs(obtido - esperado) < 0.0001){
	   printf("Parabens !!!");
           resultado = 1.0;  
   } else {
	   printf("Ainda nao !!!");
           resultado = 0.0;  
   }
   printf(" obtido: %f  esperado: %f\n", obtido, esperado);
   return resultado;
}


//[]-------------------------------------------------------------[]
//    Casos de testes
//[]-------------------------------------------------------------[]
float caso_de_teste01(){
   float raiz1, raiz2;
   int n;
   float r = 0.0;
   n = raizes(3,14,2, &raiz1, &raiz2);
   if (n > 0) { 
      r += testar(raiz1, -0.147520);
      r += testar(raiz2, -4.519146);
   }
   return r/2.0;
}

float caso_de_teste02(){
   float raiz1, raiz2;
   int n;
   float r = 0.0;
   n = raizes(6,4,2, &raiz1, &raiz2);
   if (n == 0){
      r += testar(n, 0);
   }
   return r;
}



float caso_de_teste03(){
   float raiz1, raiz2;
   int n;
   float r = 0.0;
   n = raizes(1,4,1, &raiz1, &raiz2);
   if (n > 0) { 
      r += testar(raiz1, -0.267949);
      r += testar(raiz2, -3.732051);
   }
   return r/2.0;
}


float caso_de_teste04(){
   float raiz1, raiz2;
   int n;
   float r = 0.0;
   n = raizes(2,5,1, &raiz1, &raiz2);
   if (n > 0) { 
      r += testar(raiz1, -0.219224);
      r += testar(raiz2, -2.280777);
   }
   return r/2.0;
}

float caso_de_teste05(){
   float raiz1, raiz2;
   int n;
   float r = 0.0;
   n = raizes(2,6,1, &raiz1, &raiz2);
   if (n > 0) { 
      r += testar(raiz1, -0.177124);
      r += testar(raiz2, -2.822876);
   }
   return r/2.0;
}


float caso_de_teste06(){   
   float raiz1, raiz2;
   int n;
   float r = 0.0;
   n = raizes(1,8,2, &raiz1, &raiz2);
   if (n > 0) { 
      r += testar(raiz1, -0.258343);
      r += testar(raiz2, -7.741657);
   }
   return r/2.0;
}


float caso_de_teste07(){
   float raiz1, raiz2;
   int n;
   float r = 0.0;
   n = raizes(3,9,2, &raiz1, &raiz2);
   if (n > 0) { 
      r += testar(raiz1, -0.241694);
      r += testar(raiz2, -2.758306);
   }
   return r/2.0;
}


float caso_de_teste08(){   
   float raiz1, raiz2;
   int n;
   float r = 0.0;
   n = raizes(3,7,4, &raiz1, &raiz2);
   if (n > 0) { 
      r += testar(raiz1, -1.000000);
      r += testar(raiz2, -1.333333);
   }
   return r/2.0;
}



float caso_de_teste09(){   
   float raiz1, raiz2;
   int n;
   float r = 0.0;
   n = raizes(1,7,4, &raiz1, &raiz2);
   if (n > 0) { 
      r += testar(raiz1, -0.627719);
      r += testar(raiz2, -6.372282);
   }
   return r/2.0;
}



float caso_de_teste10(){   
   float raiz1, raiz2;
   int n;
   float r = 0.0;
   n = raizes(1,3,4, &raiz1, &raiz2);
   testar (n, 0);
   return r;
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

   printf("exercicio 05\n");
   printf("sua nota foi: %.2f\n", r/10.0);
   return 0;
}
