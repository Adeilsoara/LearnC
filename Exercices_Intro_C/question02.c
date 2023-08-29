/*
02) Ler um ano de nascimento e ano atual. Imprimir a idade da
pessoa. Se a idade for maior ou igual a 18 leia o nome da pessoa e
imprima o nome digitado e uma mensagem informando que sua
entrada é permitida. (Ex: Fulano, sua entrada foi permitida.)
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano_nascimento, ano_atual, idade;
    char nome[50];
    printf("Informe seu ano de nascimento:");
    scanf("%d", &ano_nascimento);
    printf("Informe o ano atual: ");
    scanf("%d", &ano_atual);

    idade = ano_atual - ano_nascimento;
    if (idade >= 18)
    {
        printf("Digite seu nome:");
        scanf("%s",nome);
    }
    printf("Nome: %s, entrada permitida!", nome);

    return 0;
}