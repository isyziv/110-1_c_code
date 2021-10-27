#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int data[6] = { -1,-1,-1,-1,-1,-1 }, j = 0, k = 1;
void out()
{
	
	printf("¦î¦C­È¬°:");
	for (int i = 0; i != 6; i++)
	{
		j++;
		j %= 6;
		if(data[j]!=-1)
		printf(" %d", data[j]);
	}
}
void full_err()
{
	puts("The queue is Full");
}
int main(void)
{
	for (; 1;)
	{
		int ina = 0, inb = 0;
		scanf("%d", &ina);
		if (ina == 1)
		{scanf("%d", &inb);
			if ((k) % 6 == j) {
				puts("The queue is Full");
			}
			else
			{
				
				data[k] = inb;
				k++;
				k %= 6;
			}

		}
		else if (ina == 2)
		{
			
			if ((j + 1) % 6 == k) {
				puts("The queue is empty");
			}
			else
			{
				j++; 
				j %= 6;
				data[j] = -1;
			}
		}
		else if (ina == 3)
		{
			out();
			return 0;
		}
	}
	return 0;
}