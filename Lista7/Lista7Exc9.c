#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
aluno: João Vitor Mendes Moreira
Ultima atualização: 25/05/23
objetivo: ler um vetor de caracteries do fim pro começo
*/
void inverter(char* M, int tamanho)
{

  char temporario;//criando a variavel temporaria
  for (int i = 0; i <tamanho / 2; i++)//indo ate metade do vetor
  {
    temporario = *(M+i);//armazenando o valor tamanho(exp 3) no temporario
    *(M+i) = *(M+tamanho - i - 1);//fazendo o valor de M+0 se tornar o valor de M+6-o-1=5
    *(M+tamanho - i - 1) = temporario;//salvando em m5 o m0
  }
}
int main(void) 
{
  int vezes;
  printf("digite o tamanho da sua frase(conte os espaços e letras) ");
  scanf("%d",&vezes);
  char* M=(char*)malloc(2*vezes*sizeof(char));//criando vetor 2x o tamanho q a pessoa digitou... vai que ne?
  
  printf("Digite sua frase\n");  
  scanf(" %[^\n]",M);

  M=realloc(M,strlen(M)*sizeof(char));
  
  printf("Essa é a frase normal: %s\n",M);
    
  inverter(M,vezes);

  printf("A frase invertida é: %s\n",M);

  free(M);
  return 0;
}