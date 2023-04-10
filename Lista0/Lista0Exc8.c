#include <stdio.h>
/* 
  Aluno: João Vitor Mendes Moreira
  Ultima atualização: 13/03/2023
  Objetivo: receber dois numeros reais e invertelos
*/
int main(void)
{
  //Declaração de variavel
  float a=0, b=0;
  
  //leitura dos termos
  printf("informe dois numeros Reais: ");
  scanf("%f %f",&a,&b);
  
  //calculos
  a+=b;
  b=a-b;
  a=a-b; 
   
  //exibir resultados
  printf("%.6f %.6f\n",a,b);
  
  return 0;
}