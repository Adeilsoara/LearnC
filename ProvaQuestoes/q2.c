#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define POPU 0.05
/* void main()
{
    float k, t, resultado;
    float constante = 0.05;
    printf("Informe a populacao: ");
    scanf("%f", &k);
    printf("Informe o tempo em anos: ");
    scanf("%f", &t);
    resultado = k * pow(2, (constante * t));
    printf("O resultado e: %.2f", resultado);
} */

float populacao(float k, float t);

void main(){
    float pop, tempo, result;
    printf("Informe a populacao: ");
    scanf("%f", &pop);
    printf("Informe o tempo em anos: ");
    scanf("%f", &tempo);
    result = populacao(pop, tempo);
    printf("O resultado e: %.2f", result);

}

float populacao(float k, float t){
    float resultado;
    resultado = k * pow(2, (POPU * t));
    return resultado;
}