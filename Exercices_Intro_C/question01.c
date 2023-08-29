/*
1) Fazer um programa que imprima a média aritmética dos números
8,9 e 7. A media dos números 4, 5 e 6. A soma das duas médias. A
media das medias.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 8;
    int num2 = 9;
    int num3 = 7;
    int num4 = 4;
    int num5 = 5;
    int num6 = 6;
    float media1, media2;
    float soma_media, media_medias;

    media1 = (8 + 9 + 7)/3;
    media2 = (4 + 5 + 6)/3;
    
    soma_media = media1 + media2;
    media_medias = soma_media / 2;

    printf("Media 1: %f \n", media1);
    printf("Media 2: %f \n", media2);
    printf("Soma das Medias: %f \n", soma_media);
    printf("Media das Medias: %f", media_medias);
    return 0;
}