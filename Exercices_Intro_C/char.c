#include <stdio.h>
#include <stdlib.h>

int main (){
    char produto[30];
    printf("Informe o nome do produto: \n"); 
    scanf("%s", &produto);

    printf("Produto: %s \n", produto);
    return EXIT_SUCCESS;
}