#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    double side, area, perimeter;

    printf("정사각형의 한 변의 길이를 입력하세요: ");
    scanf("%lf", &side);

    area = side * side;
    perimeter = 4 * side;

    printf("정사각형의 넓이: %.2lf\n", area);
    printf("정사각형의 둘레: %.2lf\n", perimeter);

    return 0;
}