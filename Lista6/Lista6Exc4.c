#include <stdio.h>
#include <stdlib.h>
/*
aluno: juaaaaou Vitor Mendes Moreira
ultima atualização: 23/05/23
objetivo: Em uma cidade, sabe-se hipoteticamente que, em janeiro de 2021, não ocorreu temperatura
inferior a 15°C, nem superior a 40°C. Faça um programa que armazene as temperaturas de
cada dia de janeiro em um vetor (de 31 posições), calcule e imprima:
• A menor e a maior temperatura ocorrida;
• A temperatura média;
• O número de dias nos quais a temperatura foi inferior a temperatura média.
*/

int main(void) 
{
  float menor, maior, cont=0, media=0, somatorio=0;
  
  float* temperatura=(float*)malloc(31*sizeof(float));

  for(int i=0;i<31;i++)//prencher o vetor
    {
      scanf("%f",(temperatura+i));
      somatorio+= *(temperatura+i);
    }
  menor = *temperatura;//iniciando o valor menor
  maior = *temperatura;//iniciando o maior valor
  for(int i=0;i<31;i++)//validar
    {
    
      if (menor>*(temperatura+i))
      {
        menor=*(temperatura+i);//teste pro menor valor
      }
      if (maior<*(temperatura+i))
      {
       maior=*(temperatura+i); //teste pro maior valor
      }
    }
    media=(somatorio/31);
    printf("%.2f\n",media);
    printf("%.2f\n",menor);
    printf("%.2f\n",maior);
  free(temperatura);
  return 0;
}