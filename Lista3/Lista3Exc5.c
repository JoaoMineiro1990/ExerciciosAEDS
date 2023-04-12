#include <stdio.h>
/*
aluno:João Vitor Mendes Moreira
ultima atualização: 10/04/23
objetivo: receber notas de alunos e dizer o seu conceito
*/

void Conceito(int num)// fazendo o programa para dizer a nota
{
  float media;//declarando a media para repetição

  for(int i=1; i<=num;i++)
    {
      //printf("digite sua media\n");
      scanf("%f",&media);
      if(media<=39)
      {
        printf("F\n");
      }
      else if (media>=40 && media<=59)
      {
        printf("E\n");
      }
      else if (media>=60 && media<=69
        ){
        printf("D\n");
      }
      else if (media>=70 && media<=79
        ){
        printf("C\n");
      }
      else if (media>=80 && media<=89)
      {
        printf("B\n");
      }
      else
      {
        printf("A\n");
      }
    }
}

int main(void) {
//declarando as variaveis
int num;

//raciocinio
//printf("Quantos alunos vc quer a media?");
  scanf("%d",&num);
 Conceito(num);
}