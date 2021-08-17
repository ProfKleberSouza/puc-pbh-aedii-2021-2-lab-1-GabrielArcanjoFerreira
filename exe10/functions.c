#include "functions.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void tabela_verdade(int d, int cont)
{
    int max = pow(2, d) - 1;
    int soma = 0, pot, aux;
    char *str = (char *)malloc(d * sizeof(char));

    if (cont == max)
    {
        for (int i = 0; i < d; i++)
        {
            printf("1");
        }
    }
    else
    {
        for (int i = d - 1; i >= 0; i--)
        {
            pot = pow(2, i);
            if (soma + pot <= cont)
            {
                str[d - i - 1] = '1';
                soma += pot;
            }
            else
            {
                str[d - i - 1] = '0';
            }
        }
        printf("%s\n", str);
        tabela_verdade(d, ++cont);
    }

    free(str);
    str = NULL;
}
