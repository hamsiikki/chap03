#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    double width, height, area, perimeter;

    printf("���� ���̸� �Է��ϼ���: ");
    scanf("%lf", &width);

    printf("���� ���̸� �Է��ϼ���: ");
    scanf("%lf", &height);

    area = width * height;
    perimeter = 2 * (width + height);

    printf("���簢���� ����: %.2lf\n", area);
    printf("���簢���� �ѷ�: %.2lf\n", perimeter);

    return 0;
}