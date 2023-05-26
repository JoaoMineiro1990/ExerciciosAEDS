#include <stdio.h>
/*
aluno:João Vitor Mendes Moreira
ultima atualização: 25/05/23
objeitvo: imprimir o alfabeto
*/

int main(void)
{
  printf("O Alfabeto é: ");
  for(char a='A';a<'[';a++)//tabela ascII
    {
      printf("%c ",a);
    }
  return 0;
}