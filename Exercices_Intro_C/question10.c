/* 
10) Faça um algoritmo que leia dois números e indique se são iguais
ou se são diferentes. Mostre o maior e o menor (nesta sequência)
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
/*     if (num1 == num2)
    {
        printf("O %d e o %d sao iguais", num1, num2);
    }
    else
    {
        printf("O %d e o %d sao diferentes \n", num1, num2);
    } */

    num1 == num2 ? printf("Iguais \n") : printf("Diferentes \n");
    
   /*  if (num1 > num2)
    {
        printf("%d eh maior que o %d", num1, num2);
    }
    else
    {
        printf("%d eh menor que o %d", num1, num2);
    } */
    
    num1 > num2 ? printf("%d Maior que %d", num1, num2) : printf(" %d Menor que %d", num1,num2);
    
}