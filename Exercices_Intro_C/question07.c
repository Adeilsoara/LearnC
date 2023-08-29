/* 
07) Ler um número e imprimir igual a 20, menor que 20, maior que 20.
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int numero;

    scanf("%d", &numero);
    if (numero == 20)
    {
        printf("O numero %d eh igual a 20", numero);
    }
    else if ( numero > 20)
    {
        printf("O numero %d eh maior que 20", numero);
    }
    else
    {
        printf("O numero %d eh menor que 20", numero);
    }
      
    return 0;
}