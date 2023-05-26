#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
aluno:João Vitor Mendes Moreira
Ultima atualização:22/05/23
objetivo: criar um vetor, escrever dentro dele valores, conta quantos sao negativos, fazer um vetor sem espaços, e exibir o mesmo
*/
void preencher (int* notasalunos, int numerodealunos)// recebendo o vetor notas e o numero de alunos
{
  for (int i=0;i<numerodealunos;i++)
    {
      scanf("%d",notasalunos + i);//escrevendo em cada posição do notas
    }
}

void exibir ( int* exibicao, int contador )//recebendo o notas realocado e o numero de numeros negativos
{
  for(int i=0;i<contador;i++)
    {
      printf("%d ",*(exibicao+i));//exibindo 
    }
}

//int valoresnegativos(int* negativos, int vezes, int* Resultados)
int valoresnegativos(int* negativos, int vezes)
{
  int cont=0;//contar o tamanho
  int posicaovetor=0;//variavel que vai pegar as posições do vetor
  for(int i=0;i<vezes;i++)
  {
    posicaovetor = *(negativos+i);//passando por cada vetor de negativos=Notas
    if (posicaovetor<0)//teste
    {
      *(negativos+cont) = posicaovetor;//sobrescrenvendo o vetor Notas com os valores negativos em ordem
      cont++;
    }
  }
  return cont;//retornando o contador pra fazer o realloc
}

int main(void) {
  int alunos, numeronovo=0;
  printf("digite o numero de elementos(elementos inteiros(preguiça)) \n");
  scanf("%d",&alunos);

  int* Notas = (int*) malloc(alunos * sizeof(int));
  //int* Resultados =  (int*) malloc(alunos * sizeof(int));
  
  preencher(Notas,alunos);//preenchendo o vetor
  //umeronovo=valoresnegativos(Notas,alunos,Resultados);
  numeronovo=valoresnegativos(Notas,alunos);//pegando o numero de numeros negativos
  //Resultados = (int*)realloc(Resultados, numeronovo*sizeof(int));
  Notas = (int*)realloc(Notas, numeronovo*sizeof(int));//realocando o vetor Notas para pegar apenas o espaço dos negativos
  exibir(Notas,numeronovo);//exibindo o notas
  
  free(Notas);//eu chamei de notas mas eram so numeros aleatorios
  return 0;
}