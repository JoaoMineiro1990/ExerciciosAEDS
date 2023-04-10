#include <stdio.h>
/*
Aluno: João Vitor Mendes Moreira
Ultima atualização: 19/03/2023
objetivo: ler um símbolo do teclado identificar com a estrutura SWITCH
*/

int main(void) 
{
  //declaração de variavel
  char x;

  //leitura de variavel
  printf("Digite um simbolo do teclado\n");
  scanf("%c",&x);

  //calculo/logica
  switch(x)
    {
    case '<':
    printf("SINAL DE MENOR\n");
    break;
      
    case '>':
    printf("SINAL DE MAIOR\n");
    break;
      
    case '=':
    printf("SINAL DE IGUAL\n");
    break;

    default:
    printf("OUTRO SINAL\n");
    break;
      
    }
  
  return 0;
}