#include<stdio.h>

//[]-------------------------------------------------------------[]
//   Funcao: extrair_dia_mes_ano()
//   Entrada: uma string representando a data
//   Saida:   dia, mes e ano da data
//[]-------------------------------------------------------------[]
void extrair_dia_mes_ano(char data[], int *dia, int *mes, int *ano){
   // escreva o seu codigo aqui
}


//[]-------------------------------------------------------------[]
//   Funcao: testar()
//   Entrada: valor obtido da funcao, valor esperado
//   Saida: ok se obtido igual a esperado e nao ok caso contrario
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
   int dia, mes, ano;
   extrair_dia_mes_ano("10/10/2019", &dia, &mes, &ano);
   float r = 0;
   r += testar(dia, 10);
   r += testar(mes, 10);
   r += testar(ano, 2019);
   return r/3.0;
}

float caso_de_teste02(){
   int dia, mes, ano;
   extrair_dia_mes_ano("02/05/1995", &dia, &mes, &ano);
   float r = 0;
   r += testar(dia, 2);
   r += testar(mes, 5);
   r += testar(ano, 1995);
   return r/3.0;
}

float caso_de_teste03(){
   int dia, mes, ano;
   extrair_dia_mes_ano("22/04/1500", &dia, &mes, &ano);
   float r = 0;
   r += testar(dia, 22);
   r += testar(mes, 4);
   r += testar(ano, 1500);
   return r/3.0;
}

float caso_de_teste04(){
   int dia, mes, ano;
   extrair_dia_mes_ano("11/05/1985", &dia, &mes, &ano);
   float r = 0;
   r += testar(dia, 11);
   r += testar(mes, 5);
   r += testar(ano, 1985);
   return r/3.0;
}

float caso_de_teste05(){
   int dia, mes, ano;
   extrair_dia_mes_ano("12/12/1975", &dia, &mes, &ano);
   float r = 0;
   r += testar(dia, 12);
   r += testar(mes, 12);
   r += testar(ano, 1975);
   return r/3.0;
}

float caso_de_teste06(){
   int dia, mes, ano;
   extrair_dia_mes_ano("18/04/1977", &dia, &mes, &ano);
   float r = 0;
   r += testar(dia, 18);
   r += testar(mes, 4);
   r += testar(ano, 1977);
   return r/3.0;
}

float caso_de_teste07(){
   int dia, mes, ano;
   extrair_dia_mes_ano("23/11/1977", &dia, &mes, &ano);
   float r = 0;
   r += testar(dia, 23);
   r += testar(mes, 11);
   r += testar(ano, 1977);
   return r/3.0;
}

float caso_de_teste08(){
   int dia, mes, ano;
   extrair_dia_mes_ano("26/05/1995", &dia, &mes, &ano);
   float r = 0;
   r += testar(dia, 26);
   r += testar(mes, 5);
   r += testar(ano, 1995);
   return r/3.0;
}

float caso_de_teste09(){
   int dia, mes, ano;
   extrair_dia_mes_ano("02/02/2007", &dia, &mes, &ano);
   float r = 0;
   r += testar(dia, 2);
   r += testar(mes, 2);
   r += testar(ano, 2007);
   return r/3.0;
}

float caso_de_teste10(){
   int dia, mes, ano;
   extrair_dia_mes_ano("30/08/2019", &dia, &mes, &ano);
   float r = 0;
   r += testar(dia, 30);
   r += testar(mes, 8);
   r += testar(ano, 2019);
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

   printf("exercicio 01\n");
   printf("sua nota foi: %.2f\n", r/10.0);
   return 0;
}
