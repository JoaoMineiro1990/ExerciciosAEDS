#include <stdio.h>
#include <stdlib.h>
/*
aluno:João Vitor Mendes Moreira
ultimo objeitov: 25/05/23
objeitvo: permutar todos os valores
*/

void Trocar(char* a, char* b)//trocando o valor de a para b
{
  char temporario = *a;
  *a=*b;
  *b=temporario;
}

void permuta (char* M,int inicio, int vezes)
{
  if( inicio == vezes - 1)
  {
    printf("%s\n",M);                      
    return;
  }
  for ( int i=inicio/*0*/;i<vezes;i++)
    {
      Trocar(M+inicio,(M+i));
      permuta(M,inicio+1,vezes);
      Trocar(M+inicio,(M+i));
    }
}
int main(void) 
{
  int vezes, inicio=0;
  printf(" quantas letras vc vai digitar: ");
  scanf("%d",&vezes);

  char* M=(char*)malloc(vezes*sizeof(char));//criando o veotr
  for( int i=0; i<vezes; i++)
    {
      printf("digite uma letra que vai ser permutada: ");
      scanf(" %c",M+i);
    }
  permuta(M,inicio,vezes);
  
  free(M);
  return 0;
}