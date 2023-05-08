#include <stdio.h>
#include <string.h>
/*
aluno: João Vitor Mendes Moreira
Ultima atualização: 03/05/23
objetivo: ler dois arquivos e salvar em um terceiro
*/

int main(void)
{
  //declaração de variavel
  char a, b;
  
  //criação de arquivos
  FILE *arquivo=fopen("juntar.txt","w");
  FILE *texto1=fopen("texto1.txt","r");
  FILE *texto2=fopen("texto2.txt","r");
  
  //logica
  while(fscanf(texto1,"%c",&a)!=EOF)
    {
      fprintf(arquivo,"%c",a);
    }
    fprintf(arquivo,"\n");
  
  while(fscanf(texto2,"%c",&b)!=EOF)
    {
      fprintf(arquivo,"%c",b);  
    }
  
  
  fclose(texto1);
  fclose(texto2);
  fclose(arquivo);
  return 0;
}
/*char a[100], b[100], c[200];
  FILE *arquivo=fopen("juntar.txt","w");
  FILE *texto1=fopen("texto1.txt","r");
  FILE *texto2=fopen("texto2.txt","r");  

  fscanf(texto1,"%[^\n]",a);
  strcat(a,"\n");
  fscanf(texto2,"%[^\n]",b);
  strcat(a,b);
  fprintf(arquivo,"%s",a);
  
  printf("%s",a);
  fclose(texto1);
  fclose(texto2);
  fclose(arquivo);
}
*/
