#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    double exchangeRate, dollars, won;

  
    printf("원/달러 환율을 입력하세요: ");
    scanf("%lf", &exchangeRate);

    printf("변환할 달러 금액을 입력하세요: ");
    scanf("%lf", &dollars);

    won = exchangeRate * dollars;

    printf("%.2f 달러는 %.2f 원입니다.\n", dollars, won);

    return 0;
}

