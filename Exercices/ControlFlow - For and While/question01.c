#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Informe um valor: ");
    scanf("%d", &a);
    printf("Informe um segundo valor: ");
    scanf("%d", &b);

    if (a < b)
    {
        while (a <= b)
        {
            printf("a = %d\n", a);
            a++;
        }
    }
    else if (a > b)
    {
        while (a >= b)
        {
            printf("b = %d\n", a);
            a--;
        }
    }
    else
    {
        printf("a = %d e b = %d iguais\n", a, b);
    }

    return EXIT_SUCCESS;
}