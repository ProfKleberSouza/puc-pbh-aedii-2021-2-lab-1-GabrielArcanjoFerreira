#include "functions.h"

int potencia(int x, int n)
{
    int pot;

    if (n == 1)
    {
        return x;
    }
    else
    {
        pot = x * potencia(x, --n);
    }

    return pot;
}
