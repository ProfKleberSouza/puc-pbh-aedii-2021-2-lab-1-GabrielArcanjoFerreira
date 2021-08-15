#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

void inverte(char texto[])
{
    char aux;

    for (int i = 0; i < strlen(texto) / 2; i++)
    {
        aux = texto[i];
        texto[i] = texto[strlen(texto) - i - 1];
        texto[strlen(texto) - i - 1] = aux;
    }
}
