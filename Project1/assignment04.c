#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    double force, distance, work;

    printf("�ۿ��� ���� ũ��(N)�� �Է��ϼ���: ");
    scanf("%lf", &force);

    printf("���� �������� �̵��� �Ÿ�(m)�� �Է��ϼ���: ");
    scanf("%lf", &distance);

    work = force * distance;

    printf("�� ���� ���� %.2lf J(��)�Դϴ�.\n", work);

    return 0;
}