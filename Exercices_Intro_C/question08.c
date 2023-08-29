/* 
08) Crie um algoritmo que receba 3 números e informe qual o maior
entre eles.
*/
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n1, n2, n3;
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);

    if ((n1 > n2) && (n1 > n3))
    {
        printf("%d eh o maior", n1);
    }else if ((n2 > n1) && (n2 > n3))
    {
        printf("%d eh o maior", n2);
    }else if ((n3 > n1) && (n3 > n2))
    {
        printf("%d eh o maior", n3);
    }else
    {
        printf("%d %d %d sao iguais", n1, n2, n3);
    }
    
    return 0;
}