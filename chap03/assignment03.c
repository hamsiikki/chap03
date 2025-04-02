#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


double calc(int weight, int height)
{
	double energy = weight * height * 9.8;
	printf("%.6lf\n", energy);
	return energy;

}

void assignment03(void)
{
	int weight, height;
	printf("질량을 입력: ");
	scanf("%d", &weight);
	printf("높이를 입력: ");
	scanf("%d", &height);

	calc(weight, height);
}

int main()
{
	assignment03();
}
