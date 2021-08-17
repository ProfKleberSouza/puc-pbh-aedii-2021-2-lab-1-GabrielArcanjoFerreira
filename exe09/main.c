#include <stdio.h>
#include <string.h>
#include "functions.h"

int main()
{
  int m, n;
  char *sequencia;

  // Ler placar
  scanf("%d %d", &m, &n);
  sequencia = (char *)malloc((m + n) * sizeof(char));

  // Imprimir possibilidades
  placar_possiveis(m, n, (m * n) + 1, sequencia);

  return (0);
}