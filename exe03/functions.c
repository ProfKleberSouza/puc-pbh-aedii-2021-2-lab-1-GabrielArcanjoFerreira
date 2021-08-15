#include "functions.h"

void menor_maior(int v[], int n, int *menor, int *maior)
{
    *menor = v[0];
    *maior = v[0];

    // Loop pelo vetor
    for (int i = 1; i < n; i++)
    {
        if (v[i] < *menor)
        {
            *menor = v[i];
        }
        else if (v[i] > *maior)
        {
            *maior = v[i];
        }
    }
}
