	#define _CRT_SECURE_NO_WARNINGS
	#include <stdio.h>
	#include <stdlib.h>
	int data[6] = {-1,-1,-1,-1,-1,-1};
	int j = 0;
	int find()
	{
		for (int i = 0; i < 6; i++)
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
		for (int i=0 ;i!=j;i++)
		{
			printf(" %d",data[i]);
		}
	}
	void in(int inb)
	{
		int re=find();
		if (re==-1)
		{
			full_err();
		}
		else
		{
			data[re] = inb;
		}
	}
	void del(int inb)
	{
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
			data[5] = -1;
		}
	}
	int main(void)
	{
		for (; 1;)
		{
			int ina = 0, inb = 0;
			scanf("%d", &ina);
			if (ina == 1)
			{
				int re = find();
				if (re == -1)
				{
					full_err();
					goto if1;
				}
				scanf("%d",&inb);
				in(inb);
				j++;
			if1:;
			}
			else if (ina == 2)
			{
				int re = find();
				if (re == 0)
				{
					puts("The queue is empty");
					goto if2;
				}
				scanf("%d", &inb);
				del(inb);
				j--;
			if2:;
			}
			else if (ina == 3)
			{
				out();
				return 0;
			}
		}
		return 0;
	}
