#include<stdio.h>
#include<stdlib.h>

int main(){
    int input, accumulator = 0;
    const int ITERATIONS = 10;

    for (int i = 0; i < ITERATIONS; i++)
    {
        printf("Enter an integer (> 0): ");
        scanf("%d", &input);

        if (input < 0)
        {
            continue;
        }
        
        accumulator += input;
    }

    printf("\nAcumulator: %d\n", accumulator);
    


    return EXIT_SUCCESS;
}