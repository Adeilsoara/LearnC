/*
05) Informar um número e imprimir se é par ou ímpar
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int numero;

    scanf("%d", &numero);
    if (numero % 2 == 0)
    {
        printf("O numero: %d eh par", numero);
    }
    else
    {
        printf("O numero: %d eh impar", numero);
    }

    return 0;
}