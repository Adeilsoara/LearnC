#include<stdio.h>
#include<stdlib.h>

int main(){
    printf("--------------------------------\n");
    printf("DECIMAL | HEXADECIMAL | CARACTER\n");
    printf("--------------------------------\n");
    for (int i = 0; i <= 127; i++)
    {
        printf("%4d %10x %12c\n", i, i, i);
    }
    
    return EXIT_SUCCESS;
}