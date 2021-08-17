#include "functions.h"
#include <stdio.h>

void placar_possiveis(int m, int n)
{
    if (possibilidades > 0)
    {
        // Formar sequência
        for (int gol = 0; gol < m + n; gol++)
        {
        }

        placar_possiveis(m, n, possibilidades - 1, sequencia);
    }
}
