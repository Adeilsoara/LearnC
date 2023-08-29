/*
03) Solicitar salario, prestaçao. Se prestação for maior que 20% do
salario, imprimir : Empréstimo não pode ser concedido. Senão
imprimir Empréstimo pode ser concedido.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, prestacao;

    scanf("%f", &salario);
    scanf("%f", &prestacao);

    if (prestacao > ((salario / 100) * 20))
    {
        printf("A parcela e:R$ %2.2f, emprestimo nao concedido", prestacao);
    }
    else
    {
        printf("A parcela e:R$ %2.2f, emprestimo permitido", prestacao);
    }

    return 0;
}