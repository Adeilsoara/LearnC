#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float proposta_salarial, tempo;
    float piso_salarial = 1800;
    printf("Informe o tempo (anos): ");
    scanf("%f", &tempo);
    proposta_salarial = piso_salarial * pow((1.03), tempo);
    printf("O salário após %.2f anos ficará R$ %.2f", tempo, proposta_salarial);
    return 0;
}

float proposta_salarial(float tempo);

void main (){
    float t, resultado;
    printf("Informe o valor em anos: ");
    scanf("%f", &t);
    resultado = proposta_salarial(t);
    printf("Salario reajustado: %.2f", resultado);

}

float proposta_salarial (float tempo){
    float piso_salarial = 1800;
    return piso_salarial * pow((1.03), tempo);
}



