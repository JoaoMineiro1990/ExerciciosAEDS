#include <stdio.h>
/* 
  Aluno: João Vitor Mendes Moreira
  Ultima atualização: 13/03/2023
  Objetivo: ler o numerado e o denominador de uma fração e transforma-lo em decimal
*/
int main(void) 
{
  //declaração de varaivel
  float num=0, deno=0, frac=0;

  //leitura de valores
  printf("Digite o denominador em seguida do numerado da fraçao: ");
  scanf("%f %f",&num,&deno);
  
  //calculos
  frac=(num/deno);
  
  //exibicão de resultados
  
  printf("%.6f\n",frac);
  
  return 0;
}