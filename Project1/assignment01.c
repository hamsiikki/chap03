#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    double side, area, perimeter;

    printf("���簢���� �� ���� ���̸� �Է��ϼ���: ");
    scanf("%lf", &side);

    area = side * side;
    perimeter = 4 * side;

    printf("���簢���� ����: %.2lf\n", area);
    printf("���簢���� �ѷ�: %.2lf\n", perimeter);

    return 0;
}