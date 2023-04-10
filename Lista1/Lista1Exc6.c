#include <stdio.h>
/*
Aluno: João Vitor Mendes moreira
ultima atualização: 18/03/2023
objetivo: Faça um programa para ler os coeficientes de uma equação do primeiro grau (ax + b = 0), calcular e escrever a raiz da equação.
*/
int main(void) 
{
  //declaração de variavel
  float a=0, b=0, x=0;

  //leitura de variavel
  printf("insira os valores dos coeficientes: ");
  scanf("%f %f",&a,&b);

  //calculo
  x=-b/a;

  //exibição de resultado
  printf("%.2f\n",x);
  return 0;
}