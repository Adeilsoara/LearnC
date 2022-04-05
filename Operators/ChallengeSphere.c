#include <stdio.h>
#include <stdlib.h>

int main()
{
    const double pi = 3.141559;
    double r;

    printf("Enter the radius of the sphere: ");
    scanf("%lf", &r);

    double surface = 4 * pi * r * r;
    double volume = 4 / 3 * pi * r * r * r;

    printf("Decimal:\n");
    printf("radius: %.2f\n", r);
    printf("surface: %.2f\n", surface);
    printf("volume: %.2f\n", volume);
    printf("\n"); 

    printf("Scientific:\n");
    printf("radius: %.3e\n", r);
    printf("surface: %.3e\n", surface);
    printf("volume: %.3e\n", volume);
    printf("\n");  
    return EXIT_SUCCESS;
}