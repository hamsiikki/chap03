#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void computePower() {
    double value, squared, cubed;

    printf("�Ǽ�? ");
    scanf("%lf", &value);

    squared = value * value;
    cubed = value * value * value;

    printf("����: %e\n", squared);
    printf("������: %e\n", cubed);
}

int main() {
    computePower(); 
    return 0;
}
