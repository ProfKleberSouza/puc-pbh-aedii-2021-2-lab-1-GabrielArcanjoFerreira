#include <stdio.h>
#include "functions.h"

#define TAM_TEXTO 500

int main()
{
  char texto[TAM_TEXTO];

  // Ler entrada
  fgets(texto, TAM_TEXTO, stdin);

  // Gerar resultado
  inverte(texto);

  // Imprimir resultado
  printf("%s", texto);

  return (0);
}