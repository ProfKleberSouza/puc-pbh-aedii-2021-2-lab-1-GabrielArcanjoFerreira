#include <stdio.h>
#include "functions.h"

int main()
{
  int base, expoente, pot;

  // Ler entradas
  scanf("%d %d", &base, &expoente);

  // Calcular resultado
  pot = potencia(base, expoente);

  // Imprimir resultado
  printf("%d", pot);

  return 0;
}