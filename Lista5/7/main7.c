#include <stdio.h>
/*
aluno: João Vitor Mendes Moreira
Ultima atualização: 07/05/23
objetivo: ler um numero n de letras e dizer quantas sao vogais
*/
int main(void) 
{
  //crianção do documento
  FILE *arquivo=fopen("arquivo.txt","w");

  //declaração de variaveis
  int n=0, cont=0;
  char a=0;

  //logica
  //printf("digite o numero de letras desejadas");
  scanf("%d",&n);

  for(int i=1;i<=n;i++)
  {
    //printf("digite uma letra");
    scanf(" %c",&a);
    fprintf(arquivo,"%c\n",a);
  }
  fclose(arquivo);
  arquivo=fopen("arquivo.txt","r");
  while(fscanf(arquivo,"%c",&a)!=EOF)
    {       
      if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
      {
        cont++;
      }
    }
//respostas
printf("%d\n",cont);
fclose(arquivo);
return (0);
}