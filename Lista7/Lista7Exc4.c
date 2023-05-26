#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
aluno: João Vitor Mendes Moreira
ultima atualização: 25/05/23
objetivo: contar vogaias consoantes
*/
int main(void)
{
  int vezes, contadorvogais=0, contadorconsoante=0;
  char a;
  
  printf("digite o tamanho da sua frase, CONTE-LETRA-POR-LETRA e espaços \n");
  scanf("%d",&vezes);//tamanho do vetor
  
  char* M=(char*)malloc((2*vezes)*sizeof(char));
  
  printf("digite sua frase: ");
  scanf(" %[^\n]",M);//pegando a frase
  
  for(int i=0; i<vezes;i++)
    {
      if (*(M+i)=='a'||*(M+i)=='A'||*(M+i)=='e'||*(M+i)=='E'||*(M+i)=='i'||*(M+i)=='I'||*(M+i)=='o'||*(M+i)=='O'||*(M+i)=='U'||*(M+i)=='u')//teste
      {
        contadorvogais++;
      }
     else//teste
      {
        contadorconsoante++;
      }
    }
  printf("o numero de vogais é : %d\n",contadorvogais);
  printf("o numero de consoantes é: %d\n", contadorconsoante);

  free(M);
  return 0;
}