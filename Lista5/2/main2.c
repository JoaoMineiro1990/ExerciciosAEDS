#include <stdio.h>
/*
Aluno: João Vitor Mendes Moreira 
ultima atualização: 02/05/23
objetivo: gravar uma frase em um arquivo
*/

int main(void)
{
//declaração de variavel
  char a[100];
  
//criando o arquivo
  FILE *arquivo=fopen("frase.txt","w");  

//logica
  printf("digite sua frase\n");
  scanf("%[^\n]",a);

//resposta
  fprintf(arquivo,"%s",a);
  fclose(arquivo);
  return 0;
}