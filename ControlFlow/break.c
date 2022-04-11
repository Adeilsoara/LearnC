#include<stdio.h>
#include<stdlib.h>

int main(){
    int input, accumulator = 0;
    const int ITERATIONS = 10;

    for (int i = 0; i < ITERATIONS; i++)
    {
        printf("Enter an integer (-1 to exit): ");
        scanf("%d", &input);

        if (input == -1)
        {
            break;
        }
        
        accumulator += input;
    }

    printf("\nAcumulator: %d\n", accumulator);
    


    return EXIT_SUCCESS;
}