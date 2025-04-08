#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

double calc(int kg, int m)
{
    return kg * m * 9.8;
}

void print(double num)
{
    printf("%lf", num);
}

int main(void)
{
    int kg, m;
    printf("질량을 입력하시오.: ");
    scanf("%d", &kg);
    printf("높이을 입력하시오.: ");
    scanf("%d", &m);

    print(calc(kg, m));

    return 0;
}