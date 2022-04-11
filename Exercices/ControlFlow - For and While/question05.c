#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2;

    for (int i = 0; i < 3; i++)
    {
        printf("Nota 1 entre [0-10]: ");
        scanf("%f", &nota1);
        printf("Nota 2 entre [0-10]: ");
        scanf("%f", &nota2);
        
        if (nota1 == 50)
        {
            break;
        }

        float media = (nota1 + nota2) / 2;
        printf("A media eh: %.2f\n", media);
    }

    return EXIT_SUCCESS;
}