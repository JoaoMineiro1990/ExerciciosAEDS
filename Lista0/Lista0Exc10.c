#include <stdio.h>
/* 
  Aluno: João Vitor Mendes Moreira
  Ultima atualização: 13/03/2023
  Objetivo: receber valor de hora e minutos e mostrar quantos minutos do dia ja se passaram
*/
int main(void) 
{
  //declaração de variavel
  int hora=0, min= 0;
  
  //leitura de variavel
  printf("digite a hora atual no formato HH MM: ");
  scanf("%d %d",&hora,&min);
  
  //calculos
  hora*=60;
  
  //exibir resultados
  printf("%d\n",(hora+min));
  
  return 0;
}