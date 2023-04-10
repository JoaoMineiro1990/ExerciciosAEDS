#include <stdio.h>
/*
  Autor: João Vitor Mendes Moreira
  Ultima atualização: 13/03/2023
  Objetivo: Receber um numero e mostrar o valor invertido
*/
int main(void) 
{
  //Declaração de variavel
  int n1=0, uni=0, dez=0, cent=0;
  
  //Leitura do numero inteiro de 3 digitos
  printf("digite um numero inteiro de 3 digitos: ");
  scanf("%d",&n1);
  
  //Calculo do valor invertido
  //o operador % pega o valor q sobra da divisao, logo ele basicamente consegue selecionar o número que é desejado.
  uni = n1%10;
  dez = (n1%100)/10;
  cent =n1/100;
  
  //exibição de resultado
  printf("%d%d%d\n",uni,dez,cent);
  
  return 0;
}