#include <stdio.h>
/*
aluno: João Vitor Mendes Moreira
ultima atualização: 08/05/23
objetivo: ler a forma da leitura e salvar em um arquivo
*/

int main(void) 
{
  //criando arquivos
  FILE *Saida=fopen("saida.txt","w");
  FILE *entrada=fopen("entrada.txt","r");
  
  //declaração de variaveis
  int escolha=0, logica=0, c=0, d=0;
  char a=0;
  
  //logica
  //printf("a entrada vai ser por teclado ou arquivo?\n digite 1 para teclado\n Digite 2 para arquivo\n");
  scanf("%d",&escolha);
  if (escolha==2)
    {
      while(fscanf(entrada,"%c",&a)!=EOF)
      {
        fprintf(Saida,"%c",a);
      }     
    }
  if (escolha==1)
  {      
    printf("digite o numero da matricula e o telefone, digite um numero negativo para sair\n");
    scanf("%d %d",&c,&d);
    while(c>0)
      {
        fprintf(Saida,"%d %d\n",c,d);
        printf("digite o numero da matricula e o telefone, digite um numero negativo para sair\n");
        scanf("%d %d",&c,&d);
      } 
  }
      
  fclose(Saida);
  fclose(entrada);
  return 0;
}