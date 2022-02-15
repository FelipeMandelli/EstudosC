#include<stdio.h>
#include<assert.h>
#include<math.h>

#define PI 3.14159265358979323846


//[]-------------------------------------------------------------[]
//   Funcao: calcular_esfera()
//   Entrada: o raio r da esfera 
//   Saida:   área da superfície e o volume de uma esfera de raio r
//     area = 4 * pi * r ^ 2
//     volume = 4 / 3 * pi * r ^ 3 
//[]-------------------------------------------------------------[]
void calcular_esfera(float r, float *area, float *volume){
	*area = 4 * PI * pow(r,2);
	*volume = (4/3) * PI * pow(r,3);

}


//[]-------------------------------------------------------------[]
//   Funcao: r += testar()
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
   float a;
   float v;
   calcular_esfera(1, &a, &v);
   float r = 0.0;
   r += testar(a, 12.566371);
   r += testar(v, 3.141593);
   return r/2.0;
}

float caso_de_teste02(){
   float a;
   float v;
   calcular_esfera(2, &a, &v);
   float r = 0.0;
   r += testar(a, 50.265484);
   r += testar(v, 25.132742);
   return r/2.0;
}

float caso_de_teste03(){
   float a;
   float v;
   calcular_esfera(3, &a, &v);
   float r = 0.0;
   r += testar(a, 113.097336);
   r += testar(v, 84.822998);
   return r/2.0;
}

float caso_de_teste04(){
   float a;
   float v;
   float r = 0.0;
   calcular_esfera(4, &a, &v);
   r += testar(a, 201.061935);
   r += testar(v, 201.061935);
   return r/2.0;
}

float caso_de_teste05(){
   float a;
   float v;
   float r = 0.0;
   calcular_esfera(5, &a, &v);
   r += testar(a, 314.159271);
   r += testar(v, 392.699097);
   return r/2.0;
}

float caso_de_teste06(){
   float a;
   float v;
   float r = 0.0;
   calcular_esfera(6, &a, &v);
   r += testar(a, 452.389343);
   r += testar(v, 678.583984);
   return r/2.0;
}

float caso_de_teste07(){
   float a;
   float v;
   float r = 0.0;
   calcular_esfera(7, &a, &v);
   r += testar(a, 615.752136);
   r += testar(v, 1077.566284);
   return r/2.0;
}


float caso_de_teste08(){
   float a;
   float v;
   float r = 0.0;
   calcular_esfera(8, &a, &v);
   r += testar(a, 804.247742);
   r += testar(v, 1608.495483);
   return r/2.0;
}

float caso_de_teste09(){
   float a;
   float v;
   float r = 0.0;
   calcular_esfera(9, &a, &v);
   r += testar(a, 1017.876038);
   r += testar(v, 2290.220947);
   return r/2.0;
}

float caso_de_teste10(){
   float a;
   float v;
   float r = 0.0;
   calcular_esfera(10, &a, &v);
   r += testar(a, 1256.637085);
   r += testar(v, 3141.592773);
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

   printf("exercicio 07\n");
   printf("sua nota foi: %.2f\n", r/10.0);
   return 0;
}
