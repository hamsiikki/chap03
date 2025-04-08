#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    double force, distance, work;

    printf("작용한 힘의 크기(N)를 입력하세요: ");
    scanf("%lf", &force);

    printf("힘의 방향으로 이동한 거리(m)를 입력하세요: ");
    scanf("%lf", &distance);

    work = force * distance;

    printf("한 일의 양은 %.2lf J(줄)입니다.\n", work);

    return 0;
}