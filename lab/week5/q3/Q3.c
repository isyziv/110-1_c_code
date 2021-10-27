#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int data[5] = {-1,-1,-1,-1,-1}, j = 0;
int find()
{
	for (int i = 0; i < 5; i++)
	{
		if (data[i] == -1)
		{
			return i;
		}
	}
	return -1;
}
void full_err()
{
	puts("The queue is Full");
}
void out()
{
	printf("¦î¦C­È¬°:");
	for (int i = 0; i != j; i++)
	{
		printf(" %d", data[i]);
	}
}
void fa(int inb) {
	for (int i = 5; i > 0; i--)
	{
		data[i] = data[i - 1];
	}
	data[0] = inb;
}
void ba(int inb) {
	int re = find();
	if (re == -1)
	{
		full_err();
	}
	else
	{
		data[re] = inb;
	}
}
void fd(int inb) {
	int re = find();
	if (re == 0)
	{
		puts("The queue is empty");
	}
	else
	{
		for (int i = 0; i < 5; i++)
		{
			data[i] = data[i + 1];
		}
		data[4] = -1;
	}
}
void bd(int inb) {
	int re = find();
	if (re == 0)
	{
		puts("The queue is empty");
	}
	else
	{
		re--;
		data[re] = -1;
	}
}
int main(void)
{
	for (; 1;)
	{
		int ina, inb;
		scanf("%d", &ina);
		if (ina == 1 || ina == 2)
		{
			int re = find();
			if (re == -1)
			{
				full_err();
				goto if1;
			}
			scanf("%d", &inb);
			if (ina == 1)
			{
				fa(inb);
			}
			else
			{
				ba(inb);
			}
			j++;
		if1:;
		}
		if (ina == 3 || ina == 4)
		{
			int re = find();
			if (re == 0)
			{
				puts("The queue is empty");
				goto if2;
			}
			//scanf("%d", &inb);
			inb = 0;
			if (ina == 3)
			{
				fd(inb);
			}
			else
			{
				bd(inb);
			}
			j--;
		if2:;
		}
		if (ina == 5)
		{
			out();
			return 0;
		}
	}
	return 0;
}
