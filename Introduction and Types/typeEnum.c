#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum months{
        JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC,
    };

    enum months myFavoriteMonth = JUL;
    enum months  myWorstMonth = DEC;

    printf("Adeilson's favorite month: %d\n ", myFavoriteMonth);
    printf("Adeilson's worst month: %d\n", myWorstMonth);
    
    return EXIT_SUCCESS;
}