#include <stdio.h>
#include <stdlib.h>

int main()
{
    float produto, valor;
    printf("Digite o valor do produto: ");
    scanf("%f", &produto);
    if (produto > 100)
    {
        float novoValor = ((produto * 20) / 100) + produto;
        printf("O produto R$ %.2f teve o valor atualizado para: %.2f\n ", produto, novoValor);
    }
    else if (produto < 100)
    {
        float novoValor = ((produto * 10) / 100) + produto;
        printf("O produto R$ %.2f teve o valor atualizado para: %.2f\n ", produto, novoValor);
    }
    else
    {
        printf("Informe um valor válido");
    }

    return EXIT_SUCCESS;
}