#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main()
{

  int n, menor, maior, *vet;

  // Ler tamanho do vetor e criar vetor dinâmicamente
  scanf("%d", &n);
  fflush(stdin);
  vet = (int *)malloc(n * sizeof(int));

  // Ler N entradas do vetor
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &vet[i]);
  }

  // Calcular menor valor
  menor_maior(vet, n, &menor, &maior);

  // Exibe resultado
  printf("MENOR = %d\nMAIOR = %d", menor, maior);

  return (0);
}