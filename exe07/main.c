#include <stdio.h>
#include "functions.h"

int main()
{
  int m, x, y;

  // Ler entradas
  scanf("%d %d", &x, &y);

  // Calcular o mdc
  m = mdc(x, y);

  // Imprimir resultado
  printf("MDC = %d", m);

  return (0);
}