#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    double width, height, area, perimeter;

    // 사용자 입력 받기
    printf("가로의 길이를 입력하세요: ");
    scanf("%lf", &width);
    printf("세로의 길이를 입력하세요: ");
    scanf("%lf", &height);

    // 넓이와 둘레 계산
    area = width * height;
    perimeter = 2 * (width + height);

    // 결과 출력
    printf("직사각형의 넓이: %.2lf\n", area);
    printf("직사각형의 둘레: %.2lf\n", perimeter);

    return 0;
}
