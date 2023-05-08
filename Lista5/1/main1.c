#include <stdio.h>
/*
Aluno: João Vitor Mendes Moreira
Ultima Atualização: 02/05/23
objetivo: gravas numeros em um arquivo
*/

int main(void) 
{
  //declaração de variavel
  int n;
  //abrindo arquivo
  FILE *numeros=fopen("numeros.txt","w");
  //logica
  for(int i=1;i<=10;i++)
    {
      fprintf(numeros,"%d\n",i); 
    }
  fclose(numeros);
  //fim
  return 0;
}