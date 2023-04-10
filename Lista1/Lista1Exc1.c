#include <stdio.h>
/*
Aluno: João Vitor Mendes Moreira  
Ultima: atualização: 17/03/2023
Objetivo: Receber dois numeros e imprimir somente o maior
*/
int main(void)
{
  //declaração de variavel
  float n1=0, n2=0;

  //leitura de variaveis
  printf("digite dois numeros: ");
  scanf("%f %f",&n1,&n2);

  //calculo/logica
  if (n1>=n2)
  {
    printf("%.0f\n",n1);
  }
  else
  {
    printf("%.0f\n",n2);
  }

  return 0;
}