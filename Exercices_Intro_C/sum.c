#include <stdio.h>
#include <stdlib.h>

int main (){
    int sum, number1, number2;
    printf("Digite um número: ");
    scanf("%d", &number1);
    printf("Digite outro número: ");
    scanf("%d", &number2);
    
    sum = number1 + number2;
    printf("A soma dos números eh: %d + %d = %d", number1, number2, sum);
   return EXIT_SUCCESS;
}