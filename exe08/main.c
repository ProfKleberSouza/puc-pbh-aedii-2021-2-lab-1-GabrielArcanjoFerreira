#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include "functions.h"

#define TAM_PALAVRA 200

int main()
{
  char palavra[TAM_PALAVRA];
  bool flag;

  // Ler entrada
  fgets(palavra, TAM_PALAVRA, stdin);
  fflush(stdin);

  // ToUpper
  for (int i = 0; i < strlen(palavra); i++)
  {
    palavra[i] = toupper(palavra[i]);
  }

  // Verificar se palindromo
  flag = is_palindromo(palavra, strlen(palavra));

  // Imprimir resultado
  if (flag)
  {
    printf("SIM");
  }
  else
  {
    printf("NAO");
  }

  return (0);
}