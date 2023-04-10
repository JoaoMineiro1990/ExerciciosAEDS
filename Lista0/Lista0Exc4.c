#include <stdio.h>
/*
  Aluno: João Vitor Mendes Moreira
  Ultima atualização: 13/03/2023
  objetivo: Calcular perimento, area de um circulo
*/
int main(void) 
{
  //Declaração de variavel
  float raio=0, perimeto=0, area=0, pi=3.141592;
  
  //Leitura da base a altura
  //printf("digite o valor do raio ");
  scanf("%f",&raio);
    
  //calculo do perimento, area e diagonal
  perimeto=2*pi*raio;
  area=pi*(raio*raio);

  //Exibição de resultados
  printf("Perímetro: %.2f\n",perimeto);
  printf("Área: %.2f\n",area);
  
  return 0;
  }
