/* Faça um programa em C que imprima os números de 10 à 1 usando
a estrutura de repetição while; */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int contador = 10;
    
    while (contador >= 0)
    {
        printf("%d \n", contador);
        contador--;
    }

 return 0;
}

