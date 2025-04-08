#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    double exchangeRate, dollars, won;

    printf("원/달러 환율을 입력하세요: ");
    scanf("%lf", &exchangeRate);

    printf("달러 금액을 입력하세요: ");
    scanf("%lf", &dollars);

    won = exchangeRate * dollars;

    printf("총 금액은 %.2f원입니다.\n", won);

    return 0;
}