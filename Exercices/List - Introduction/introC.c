#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, media;
    printf("----------- Programa -----------\n");
    printf("Digite a primeira nota:\n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota:\n");
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;
   /*  if (media >= 6)
    {
        printf("Aprovavo");
    }else{
        printf("Reprovrado");
    } */
    
    printf(media >= 6 ? "aprovavo": "repovrado");
    return EXIT_SUCCESS;
}