#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void computePower() {
    double value, squared, cubed;

    printf("½Ç¼ö? ");
    scanf("%lf", &value);

    squared = value * value;
    cubed = value * value * value;

    printf("Á¦°ö: %e\n", squared);
    printf("¼¼Á¦°ö: %e\n", cubed);
}

int main() {
    computePower(); 
    return 0;
}
