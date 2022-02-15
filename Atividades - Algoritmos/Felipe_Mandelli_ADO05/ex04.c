#include<stdio.h>
#include<math.h>

//[]-------------------------------------------------------------[]
//   Função: calcula_hexagono()
//   Entrada: lado de um hexagono regular 
//   Saída:   area e o perímetro
//       area = 3 * lado^2 *  raiz_quadrada(3)/2
//       perimetro = 6 * lado
//[]-------------------------------------------------------------[]
void calcula_hexagono(float lado, float *area, float *perimetro){
   float raiz = sqrt(3);
   float potencia = pow(lado,2);
   *area = (3 * potencia * raiz) / 2;
   *perimetro = 6 * lado;
}


//[]-------------------------------------------------------------[]
//   Função: testar()
//   Entrada: valor obtido da funcao, valor esperado
//   Saída: ok se obtido igual a esperado e nao ok caso contrario
//[]-------------------------------------------------------------[]
float testar(float obtido, float esperado){
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
   float area, perimetro;
   calcula_hexagono(6, &area, &perimetro);
   float r = 0.0;
   r += testar(area, 93.53074666666);
   r += testar(perimetro, 36);
   return r/2.0;
}

float caso_de_teste02(){
   float area, perimetro;
   calcula_hexagono(8, &area, &perimetro);
   float r = 0.0;
   r += testar(area, 166.276871);
   r += testar(perimetro, 48);
   return r/2.0;
}

float caso_de_teste03(){
   float area, perimetro;
   calcula_hexagono(7, &area, &perimetro);
   float r = 0.0;
   r += testar(area,127.305733); 
   r += testar(perimetro, 42);
   return r/2.0;
}


float caso_de_teste04(){
   float area, perimetro;
   calcula_hexagono(5, &area, &perimetro);
   float r = 0.0;
   r += testar(area, 64.951904);
   r += testar(perimetro, 30);
   return r/2.0;
}

float caso_de_teste05(){
   float area, perimetro;
   calcula_hexagono(10, &area, &perimetro);
   float r = 0.0;
   r += testar(area, 259.807617);
   r += testar(perimetro, 60);
   return r/2.0;
}

float caso_de_teste06(){   
   float area, perimetro;
   calcula_hexagono(3, &area, &perimetro);
   float r = 0.0;
   r += testar(area, 23.382687);
   r += testar(perimetro, 18);
   return r/2.0;
}

float caso_de_teste07(){
   float area, perimetro;
   calcula_hexagono(11, &area, &perimetro);
   float r = 0.0;
   r += testar(area, 314.367218);
   r += testar(perimetro, 66);
   return r/2.0;
}

float caso_de_teste08(){   
   float area, perimetro;
   calcula_hexagono(12, &area, &perimetro);
   float r = 0.0;
   r += testar(area,374.122986);
   r += testar(perimetro, 72);
   return r/2.0;
}

float caso_de_teste09(){   
   float area, perimetro;
   calcula_hexagono(13, &area, &perimetro);
   float r = 0.0;
   r += testar(area, 439.074890);
   r += testar(perimetro, 78);
   return r/2.0;
}

float caso_de_teste10(){   
   float area, perimetro;
   calcula_hexagono(4, &area, &perimetro);
   float r = 0.0;
   r += testar(area, 41.569218);
   r += testar(perimetro, 24);
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

   printf("exercicio 04\n");
   printf("sua nota foi: %.2f\n", r/10.0);
   return 0;
}
