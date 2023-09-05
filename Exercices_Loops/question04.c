/* Faça um programa em C que imprima os números pares de 1 a 50  */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador = 0;
    while (contador <= 50)
    {
        if (contador % 2 == 0)
        {
            printf("%d ", contador);
        }
        contador++;
    }
    
    return 0;
}
