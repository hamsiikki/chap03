#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    double exchangeRate, dollars, won;

    printf("��/�޷� ȯ���� �Է��ϼ���: ");
    scanf("%lf", &exchangeRate);

    printf("�޷� �ݾ��� �Է��ϼ���: ");
    scanf("%lf", &dollars);

    won = exchangeRate * dollars;

    printf("�� �ݾ��� %.2f���Դϴ�.\n", won);

    return 0;
}