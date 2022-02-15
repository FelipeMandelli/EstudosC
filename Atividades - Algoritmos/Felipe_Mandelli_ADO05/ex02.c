#include<stdio.h>

//[]-------------------------------------------------------------[]
//   Funcao: converter_horas_minutos_segundos()
//   Entrada: um tempo dado em segundos
//   Saída:   horas, minutos e segundos
//[]-------------------------------------------------------------[]
void converter_horas_minutos_segundos(int tempo, int *hora, int *minutos, int *segundos){
  *hora = tempo/3600;
  *minutos = (tempo - (*hora * 3600))/60;
  *segundos = (tempo - (*hora * 3600) - (*minutos * 60));
}


//[]-------------------------------------------------------------[]
//   Funcao: testar()
//   Entrada: valor obtido da funcao, valor esperado
//   Saída: ok se obtido igual a esperado e nao ok caso contrario
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
   int h, m, s;
   converter_horas_minutos_segundos(6, &h, &m, &s);
   float r = 0;
   r += testar(h, 0);
   r += testar(m, 0);
   r += testar(s, 6);
   return r/3.0;
}

float caso_de_teste02(){
   int h, m, s;
   converter_horas_minutos_segundos(367, &h, &m, &s);
   float r = 0;
   r += testar(h, 0);
   r += testar(m, 6);
   r += testar(s, 7);
   return r/3.0;
}

float caso_de_teste03(){
   int h, m, s;
   converter_horas_minutos_segundos(3786, &h, &m, &s);
   float r = 0;
   r += testar(h, 1);
   r += testar(m, 3);
   r += testar(s, 6);
   return r/3.0;
}

float caso_de_teste04(){
   int h, m, s;
   converter_horas_minutos_segundos(5879, &h, &m, &s);
   float r = 0;
   r += testar(h, 1);
   r += testar(m, 37);
   r += testar(s, 59);
   return r/3.0;
}

float caso_de_teste05(){
   int h, m, s;
   converter_horas_minutos_segundos(12364, &h, &m, &s);
   float r = 0;
   r += testar(h, 3);
   r += testar(m, 26);
   r += testar(s, 4);
   return r/3.0;
}

float caso_de_teste06(){
   int h, m, s;
   converter_horas_minutos_segundos(32548, &h, &m, &s);
   float r = 0;
   r += testar(h, 9);
   r += testar(m, 2);
   r += testar(s, 28);
   return r/3.0;
}

float caso_de_teste07(){
   int h, m, s;
   converter_horas_minutos_segundos(656, &h, &m, &s);
   float r = 0;
   r += testar(h, 0);
   r += testar(m, 10);
   r += testar(s, 56);
   return r/3.0;
}

float caso_de_teste08(){
   int h, m, s;
   converter_horas_minutos_segundos(9878, &h, &m, &s);
   float r = 0;
   r += testar(h, 2);
   r += testar(m, 44);
   r += testar(s, 38);
   return r/3.0;
}

float caso_de_teste09(){
   int h, m, s;
   converter_horas_minutos_segundos(79874, &h, &m, &s);
   float r = 0;
   r += testar(h, 22);
   r += testar(m, 11);
   r += testar(s, 14);
   return r/3.0;
}

float caso_de_teste10(){
   int h, m, s;
   converter_horas_minutos_segundos(321654, &h, &m, &s);
   float r = 0;
   r += testar(h, 89);
   r += testar(m, 20);
   r += testar(s, 54);
   return r/3.0;
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

   printf("exercicio 02\n");
   printf("sua nota foi: %.2f\n", r/10.0);
   return 0;
}
