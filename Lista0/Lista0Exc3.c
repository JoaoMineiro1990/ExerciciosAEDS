#include <stdio.h>
#include <math.h>
/*
  Aluno: João Vitor Mendes Moreira
  Ultima atualização: 13/03/2023
  objetivo: Calcular perimento, area e diagonal de um retangulo
*/
int main(void) 
{
  //Declaração de variavel
  float base=0, altura=0, perimeto=0, area=0, diagonal=0;
  
  //Leitura da base a altura
  printf("digite o valor da base e da altura ");
  scanf("%f %f",&base,&altura);
    
  //calculo do perimento, area e diagonal
  perimeto=2*(base+altura);
  area=base*altura;
  diagonal=(base*base+altura*altura);
  diagonal=sqrt(diagonal);
  //Exibição de resultados
  printf("Perímetro: %.2f\n",perimeto);
  printf("Área: %.2f\n",area);
  printf("Diagonal %.2f\n",diagonal);
  
  return 0;
  
}