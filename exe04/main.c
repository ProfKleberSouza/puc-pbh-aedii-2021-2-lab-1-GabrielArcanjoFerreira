#include <stdio.h>
#include "functions.h"

#define TAM_TEXTO 500

int main()
{
  char texto[TAM_TEXTO];

  // Ler entrada
  fgets(texto, TAM_TEXTO, stdin);

  // Gerar resultado
  numero_vogais(texto);

  return (0);
}