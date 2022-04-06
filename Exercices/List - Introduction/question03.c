#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned numero;
    printf("Informe um número (int): ");
    scanf("%d", &numero);
    printf("Hexadecimal: %x\n", numero);
    printf("Octal: %o\n\n", numero);
    return EXIT_SUCCESS;
}