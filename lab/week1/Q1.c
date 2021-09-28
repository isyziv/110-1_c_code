#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int math(int a,int b)
{
	if (a<b)
	{
		return 1;
	}
	return 0;
}
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (!math(a,b))
	{
		int d;
		d = a;
		a = b;
		b = d;
	}
	if (!math(b, c))
	{
		int d;
		d = b;
		b = c;
		c = d;
	}
	printf("%d %d %d", a, b, c);
	return 0;
}