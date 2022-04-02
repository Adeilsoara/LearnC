#include<stdio.h>
#include<stdlib.h>

typedef enum{
    TEA,
    COFFE,
    JUICE,
    BEER,
} Menu;

int main(){
    Menu antonio = COFFE;
    Menu carlos = BEER;

    printf("Antonio: %d\n", antonio);
    printf("Andrea: %d\n", carlos);

    return EXIT_SUCCESS;
}