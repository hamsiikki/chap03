#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main()
{
    double num, square, cube;

    printf("�Ǽ����� �Է��ϼ��� (��: 12.34 �Ǵ� 1.234e2): ");
    scanf("%lf", &num);

    square = pow(num, 2);
    cube = pow(num, 3);

    printf("����: %e\n", square);
    printf("������: %e\n", cube);

    return 0;
}