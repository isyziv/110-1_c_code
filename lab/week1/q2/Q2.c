#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
double loop(int n)
{
	int a = 1;
	for (; n != 0; n--)
	{
		a *= n;
	}
	return a;
}
int main()
{
	double a;
	scanf("%lf", &a);
	printf("%d factorial is %lf", (int)a, loop(a));
	return 0;
}