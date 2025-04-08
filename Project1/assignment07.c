#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main()
{
    double num, square, cube;

    printf("실수값을 입력하세요 (예: 12.34 또는 1.234e2): ");
    scanf("%lf", &num);

    square = pow(num, 2);
    cube = pow(num, 3);

    printf("제곱: %e\n", square);
    printf("세제곱: %e\n", cube);

    return 0;
}