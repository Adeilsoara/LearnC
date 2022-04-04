#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

int main(){
    unsigned students = 25U;
    unsigned long long worldPopulation = 7891235945U;

    printf("%12u | Students in the class\n", students);
    printf("%12llu | World population now\n", worldPopulation);

    uint8_t count = UINT8_MAX;
    printf("%12u | Count of something\n", count);

    count = count + 1;

    printf("%12u | Count overflow", count);

    return EXIT_SUCCESS;
}