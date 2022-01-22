#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n, l, i, j, temp;
	scanf("%d", &n);//代戈计秖
	while (n--)
	{
		scanf("%d", &l);//�酲�����
		int a[1000] = { 0 }, count = 0;
		for (i = 0; i < l; i++)
		{
			scanf("%d", &a[i]);//ó竊絪腹
		}
		for (i = 0; i < l; i++) {
			for (j = i + 1; j < l; j++) {
				if (a[i] > a[j]) {//逼�恰A�隹�ユ传羆Ω计
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
					count++;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n", count);
	}
	return 0;
}
