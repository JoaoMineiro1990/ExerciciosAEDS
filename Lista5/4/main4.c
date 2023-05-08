#include <stdio.h>
/*
aluno:João Vitor Mendes Moreira
ultima atualização: 03/05/23
objtivo: imprimir do jeitinho que esta escrito no txt*/

int main(void) 
{
//crianção de arquivo
  FILE *arquivo=fopen("texto.txt","r");

//declaração de variavel
  char a;
  int cont=1;

//logica
  while(fscanf(arquivo,"%c",&a)!=EOF)
    {
      printf("%c",a);
    
      if (a=='\n')
      {
        cont++;
      }
    }

//resposta
  
    printf("\n%d\n",cont);

fclose(arquivo);
return 0;
}