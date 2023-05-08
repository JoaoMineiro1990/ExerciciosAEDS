#include <stdio.h>
/*
Aluno: João Vitor Mendes Moreira 
ultima atualização: 02/05/23
objetivo: gravar uma frase em um arquivo
*/

int main(void)
{
//declaração de variavel
  char a[100], n=0;
  int contador=0;
//abrindo arquivo
 FILE *arquivo=fopen("frase.txt","r");

//logica  
  while(fscanf(arquivo,"%c",&n)!=EOF)
    {
      if(n=='a'|| n=='A')
      {
        contador++;
      }
    }
fclose(arquivo);
  //resposta
  printf("%d\n",contador);
  return 0;
}