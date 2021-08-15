#include <stdbool.h>
#include <stdio.h>
#include "functions.h"

bool is_palindromo(char texto[], int tamanho)
{
    bool flag_palindromo;

    if (tamanho <= 2)
    {
        return true;
    }
    else if (texto[0] == texto[tamanho - 1])
    {
        flag_palindromo = is_palindromo(++texto, tamanho - 2);
    }
    else
    {
        return false;
    }
    return flag_palindromo;
}
