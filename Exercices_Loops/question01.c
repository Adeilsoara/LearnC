/* Faça um programa em C que imprima os números de 1 à 10 usando
a estrutura de repetição while; */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int contador = 1;
    
    while (contador <= 10)
    {
        printf("%d \n", contador);
        contador++;
    }

 return 0;
}

