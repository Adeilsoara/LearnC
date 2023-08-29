/* 
06) Ler 1 número. Se positivo, imprimir raiz quadrada senão o
quadrado do número. 
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float numero;
    float raiz_quadrada;

    scanf("%f", &numero);
    if (numero >= 0)
    {
        raiz_quadrada = sqrt(numero);
    }
    printf("A raiz quadrada de %2.2f eh: %2.2f", numero, raiz_quadrada);
   
    return 0;
}