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
    printf("������ �Է��Ͻÿ�.: ");
    scanf("%d", &kg);
    printf("������ �Է��Ͻÿ�.: ");
    scanf("%d", &m);

    print(calc(kg, m));

    return 0;
}