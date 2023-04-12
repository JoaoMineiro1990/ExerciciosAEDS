#include <stdio.h>
/*
aluno:João Vitor Mendes Moreira
ultima atualização: 11/04/23
objetivo: receber a idade de um nadador e colocar em um conceito*/
char Conceito(int idade)// fazendo programa pra escolher o conceito
{
  //declaração de variavel
  char conceito=0;

  //raciocinio
      if(idade>=5 && idade<=7)
      {
        return (conceito='F');
      }
      else if (idade>=8 && idade<=10)
      {
        return (conceito='E');
      }
      else if (idade>=11 && idade<=13)
      {
        return (conceito='D');
      }
      else if (idade>=14 && idade<=15){
        return (conceito='C');
      }
      else if (idade>=16 && idade<=18)
      {
        return (conceito='B');
      }
      else
      {
        return (conceito='A');
      }
}

int main(void) {
//declarando as variaveis
int num, idade;

//raciocinio
//printf("Quantos alunos vc quer a media?");
scanf("%d",&num);

//repetição
  for(int i=1;i<=num;i++)
  {
    //printf("digite sua idade\n");
    scanf("%d",&idade);
    printf("%c\n",Conceito(idade));
  }
}