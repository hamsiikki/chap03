#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define SQM_TO_PYEONG 0.3025

int main()
{
    double squareMeters, pyeong;

    printf("����Ʈ ������ ��������(��)�� �Է��ϼ���: ");
    scanf("%lf", &squareMeters);

    pyeong = squareMeters * SQM_TO_PYEONG;

    printf("�Է��Ͻ� ������ %.2f���Դϴ�.\n", pyeong);

    return 0;
}