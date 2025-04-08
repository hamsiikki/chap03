#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define SQM_TO_PYEONG 0.3025

int main()
{
    double squareMeters, pyeong;

    printf("아파트 면적을 제곱미터(㎡)로 입력하세요: ");
    scanf("%lf", &squareMeters);

    pyeong = squareMeters * SQM_TO_PYEONG;

    printf("입력하신 면적은 %.2f평입니다.\n", pyeong);

    return 0;
}