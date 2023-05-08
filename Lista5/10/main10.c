#include <stdio.h>
#include <limits.h>
/*
aluno: João Vitor Mendes Moreira
Ultima atualização: 08/05/23
objetivo: receber um arquvo cheio de numeros e falar o maior menor e media de todos
*/

int main(void) 
{
  //criando arquivo
  FILE *Entrada=fopen("entrada.txt","r");

  //declaração de variavel
  float maior=0, menor=INT_MAX, media=0, a=0, soma=0, contador=0;

  //logica
  while(fscanf(Entrada,"%f",&a)!=EOF)
    {
      if(a>maior)
      {
        maior=a;
      }
      if(a<menor)
      {
        menor=a;
      }
      contador++;
      soma+=a;
    }
  media=soma/contador;
  //resposta
  printf("%.2f\n",maior);
  printf("%.2f\n",menor);
  printf("%.2f\n",media);
  fclose(Entrada);
  return 0;
}