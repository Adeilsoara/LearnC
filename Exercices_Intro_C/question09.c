/* 
09) Faça um algoritmo que leia dois números nas variáveis NumA e
NumB, nessa ordem, e imprima em ordem inversa, isto é, se os
dados lidos forem NumA = 5 e NumB = 9, por exemplo, devem ser
impressos na ordem NumA = 9 e NumB = 5.
*/
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int numA, numB, aux;
    scanf("%d", &numA);
    scanf("%d", &numB);
    aux = numA;
    numA = numB;
    numB = aux;
    printf(" %d %d ", numA, numB);    
    return 0;
}