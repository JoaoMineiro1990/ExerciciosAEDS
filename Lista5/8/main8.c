#include <stdio.h>
/*
aluno: João Vitor Mendes Moreira
ultima atualização: 07/05/23
objetivo: ler o numero e valor do aluguel de carros e fazer um monte de contas em cima dos valores
*/
int main(void) 
{
  //criando arquivo
  FILE *carros=fopen("carros.txt","w");

  //declaração de variaveis
  int carro=0;
  float valor=0, total=0, totalatrasado=0, conserto=0;

  //logica
  //printf("digite o numero de carros e o valor do aluguel");
  scanf("%d %f",&carro,&valor);

  //logica
  total=((carro/3)*valor)*12;
  totalatrasado=(carro/10)*(0.2*valor);
  conserto = carro*0.02*600.00;

  fprintf(carros,"%.2f\n",total);
  fprintf(carros,"%.2f\n",totalatrasado);
  fprintf(carros,"%.2f\n",conserto);

  fclose(carros);
  return 0;
}