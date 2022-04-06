#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("--------------------------\n");
    printf("---CONVERCAO F EM C ------\n");
    printf("--------------------------\n");
    float fahrenheit, celcius;
    printf("Informe a temperatura em Fahrenheit (float):\n");
    scanf("%f", &fahrenheit);
    celcius = (fahrenheit - 32.0) * (5.0 / 9.0);
    printf("A temperatura %.2f em graus Fahrenheit eh: %.2f Celcius \n ", fahrenheit, celcius);

    int f, c;
    printf("Informe a temperatura em Fahrenheit (int):\n");
    scanf("%f", &f);
    c = (f - 32.0) * (5.0 / 9.0);
    printf("A temperatura %d em graus Fahrenheit eh: %d Celcius \n ", f, c);

    return EXIT_SUCCESS;
}
