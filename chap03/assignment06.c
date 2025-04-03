#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define CONVERSION_FACTOR 0.3025 

void convertSquareMeterToPyeong() 
{
    double squareMeter, pyeong;

    // 면적 입력받기
    printf("아파트의 면적(제곱미터)? ");
    scanf("%lf", &squareMeter);

    // 변환 계산
    pyeong = squareMeter * CONVERSION_FACTOR;

    // 결과 출력 (소수점 둘째 자리까지)
    printf("%.2lf 제곱미터 = %.2lf 평\n", squareMeter, pyeong);
}

int main()
{
    convertSquareMeterToPyeong(); 
    return 0;
}