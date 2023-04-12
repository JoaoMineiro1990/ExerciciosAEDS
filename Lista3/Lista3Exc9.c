#include <stdio.h>
/*
Aluno: João Vitor Mendes Moreira
Ultima atualização: 11/04/23
objetivo: receber a notas dos alunos, calcular a media, somar as medias aprovadas e dividir pelo numero de alunos aprovados.
*/

float medias(int num)// função que vai receber o numero de repetiç~~oes
{
  int contador=0;
  float media, mediatotal=0;
  for (int i=1;i<=num;i++)
  {
    //printf("digite sua media");
    scanf("%f",&media);
    if(media>=6)
    {
      contador++;
      mediatotal+=media;
    }
  }
  return(mediatotal/contador);
  return(0);
}
int main(void) 
{
//declaração de variaveis
int num=0;
//receber valores
//printf("digite o numero de pessoas");
scanf("%d",&num);
//exibição de resultado
printf("%.1f\n",medias(num));
}