/* 
04) Informar um saldo e imprimir o saldo com reajuste de 1%.
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    float saldo, saldo_reajustado;

    scanf("%f", &saldo);
    
    saldo_reajustado = saldo + ((saldo/100)*1);

    printf("Saldo atual: R$ %2.2f \n", saldo);
    printf("Saldo com Reajuste: R$ %2.2f", saldo_reajustado);
    return 0;
}