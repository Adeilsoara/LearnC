#include<stdio.h>
#include<stdlib.h>
/* Fazer um programa em C que pergunta um valor em metros e imprime o
correspondente em decímetros, centímetros e milímetros */
int main(){
    int m;
    printf("-----------------------------------------------\n");
    printf("Meters | Decimeters | Centimeters | Milimeters \n");
    printf("-----------------------------------------------\n");
    printf("Enter a value in meters (m): ");
    scanf("%d", &m);

    int decimeters = m * 10;
    printf("%d meters to decimeters is: %d decimeters\n", m, decimeters);

    int centimeters = m * 100;
    printf("%d meters to decimeters is: %d centimeters\n", m, centimeters);

    int milimeters = m * 1000;
    printf("%d meters to milimeters is: %d milimeters", m, milimeters);
    return EXIT_SUCCESS;
}