#include <stdio.h>
/* 
  Aluno: João Vitor Mendes Moreira
  Ultima atualização: 13/03/2023
  Objetivo: Ler a razão e o primeiro termo de uma PG e mostrar o seu quinto termo.
*/
int main(void)
{
  //declaração de variavel
  int term=0, razao=0, quintoterm=0;
  
  //Leitura dos valores
  printf("Informe primeiramente a razão e em seguida o primeiro termo da PG: ");
  scanf("%d %d",&razao,&term);
  
  //Calculo
  quintoterm=term*(razao*razao*razao*razao);
  
  //Exibição de resultados
  printf("%d\n",quintoterm);
  
}