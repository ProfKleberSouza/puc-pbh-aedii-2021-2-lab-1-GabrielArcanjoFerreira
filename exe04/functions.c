#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

void numero_vogais(char texto[])
{
    int cont_a = 0, cont_e = 0, cont_i = 0, cont_o = 0, cont_u = 0;

    // Loop de contagem
    for (int i = 0; i < strlen(texto); i++)
    {
        if (texto[i] == 'a' || texto[i] == 'A')
        {
            cont_a++;
        }
        else if (texto[i] == 'e' || texto[i] == 'E')
        {
            cont_e++;
        }
        else if (texto[i] == 'i' || texto[i] == 'I')
        {
            cont_i++;
        }
        else if (texto[i] == 'o' || texto[i] == 'O')
        {
            cont_o++;
        }
        else if (texto[i] == 'u' || texto[i] == 'U')
        {
            cont_u++;
        }
    }

    // Imprimir saída
    printf("A = %d\nE = %d\nI = %d\nO = %d\nU = %d", cont_a, cont_e, cont_i, cont_o, cont_u);
}
