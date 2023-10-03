#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float bacterias(float quantidade, float tempo);

void main()
{
    float q, t, result;
    printf("Digite a quantidade de bacterias: ");
    scanf("%f", &q);
    printf("Digite o tempo (horas): ");
    scanf("%f", &t);
    result = bacterias(q, t);
    printf("Total de bacterias apos %.2f horas: %.2f", t, result);
}

float bacterias(float quantidade, float tempo)
{
    float resultado = quantidade * pow(2, (tempo - 1));
    return resultado;
}

/* void main()
{
   float q, t, resultado;
   printf("Digite a quantidade de bacterias: ");
   scanf("%f", &q);
   printf("Digite o tempo (horas): ");
   scanf("%f", &t);
   resultado = q * pow(2, (t -1));
   printf("Total de bacterias apos %.2f horas: %.2f", t, resultado);

}  */
