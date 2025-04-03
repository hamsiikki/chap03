#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void calculate_work(void)
{
	double force, distance;

	printf("힘(N)은?");
	scanf("%lf", &force);
	printf("이동거리(m)는? ");
	scanf("%lf", &distance);

	printf("일의 양: %.2lf", force * distance);

}

int main()
{
	calculate_work();
	return 0;
}