#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    double width, height, area, perimeter;

    printf("가로 길이를 입력하세요: ");
    scanf("%lf", &width);

    printf("세로 길이를 입력하세요: ");
    scanf("%lf", &height);

    area = width * height;
    perimeter = 2 * (width + height);

    printf("직사각형의 넓이: %.2lf\n", area);
    printf("직사각형의 둘레: %.2lf\n", perimeter);

    return 0;
}