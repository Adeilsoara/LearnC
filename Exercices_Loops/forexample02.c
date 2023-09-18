/* Faça um programa em C que leia 10 valores e 
ao final imprima a média aritmética dos valores lidos. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    float num, soma=0, media=0;
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("Informe o numero: ");
        scanf("%f", &num);
        soma += num;
    }
    media  = soma / 5;

    printf("A media e: %2.2f \n", media);
    printf("A soma e: %f", soma);

 return 0;
}

