#include <stdio.h>
/* 
  Aluno: João Vitor Mendes Moreira
  Ultima atualização: 13/03/2023
  Objetivo: ler a razão de uma PA, seu primeiro termo e mostrar o Decimo valor.
*/
int main(void)
{
  //declaração de variavel
  int term=0, razao=0, decterm=0;
  
  //Leitura dos valores
  printf("Informe primeiramente a razão e em seguida da PA: ");
  scanf("%d %d",&razao,&term);
  //Calculo
  decterm=term+razao*9;
  
  //Exibição de resultados
  
  printf("%d\n",decterm);
  return 0;
}