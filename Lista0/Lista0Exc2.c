#include <stdio.h>
/*
  Aluno: João Vitor Mendes Moreira
  Ultima alteração: 13/03/2023
  Objetivo: calcular o valor de cada killowat, o valor total    em reais a ser pago e um novo valor com 10% de desconto
*/
int main(void) 
{
  //Declaração de variavel
  int kW=0;
  float salario=0, valkw=0, valtotal=0, descont=0,     
  valorfinal=0;
  //leitura do valor do salario minimo e quantidade de kW gastos
  printf("Digite o valor do salario minimo ");
  scanf("%f",&salario);
  printf("Digite o consumo de kW ");
  scanf("%d",&kW);
  
  //Calculo do valor do kW, o valor total e valor com desconto.
  valkw=salario/700;
  valtotal=kW*valkw;
  descont=valtotal*0.1;
  valorfinal=valtotal-descont;
  
  //Exibição do resultado
  printf("Valor do kW: %.2f\n",valkw);
  printf("Valor a pagar: %.2f\n",valtotal);
  printf("Valor com desconto: %.2f\n",valorfinal);
  
  return 0;
}