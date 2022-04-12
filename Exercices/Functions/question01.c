#include <stdio.h>
#include <stdlib.h>

float potencia(float a, int b){
    float result = 1;
    for ( b; b > 0; b--)
    {
        result = result * a;
    }
    return result;
    
}

int main()
{
   float base = 2, expoent = 2;
   float resultado = potencia(base, expoent);
   printf("Resultado %.2f: ", resultado);

   return EXIT_SUCCESS;
}