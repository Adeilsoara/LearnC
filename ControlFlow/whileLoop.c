#include<stdio.h>
#include<stdlib.h>

int main(){
    int iterations = 5;

    while (iterations > 0)
    {
        printf("i: %d\n", iterations);
        iterations--;
    }
    
    return EXIT_SUCCESS;
}