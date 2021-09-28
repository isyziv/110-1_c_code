#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
double loop(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return (n * loop(n - 1));
	}
}
int main()
{
	double a;
	scanf("%lf", &a);
	printf("%d factorial is %lf", (int)a, loop(a));
	return 0;
}