#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct {
	int under[100];
	int top[100];
	int len;
}poly[2];
void swap(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void readPoly(int number) {
	int zero = 0;
	while (1) {
		scanf("%d %d", &poly[number].under[zero], &poly[number].top[zero]);
		if ((poly[number].under[zero] == 0) && (poly[number].top[zero] == 0)) {
			break;
		}
		zero = zero + 1;
	}
	poly[number].len = zero;
}
void printPoly(int number) {
	int zero, zero1, len;
	len = poly[number].len;
	zero = 0;
	while (len != 0) {
		zero = 0;
		zero1 = 1;
		while (zero1 < len) {
			if (poly[number].top[zero] > poly[number].top[zero1]) {
				swap(&poly[number].top[zero], &poly[number].top[zero1]);
				swap(&poly[number].under[zero], &poly[number].under[zero1]);
			}
			zero = zero + 1;
			zero1 = zero1 + 1;
		}
		len = len - 1;
	}
	while (zero < poly[number].len) {
		printf("%d * X^%d", poly[number].under[zero], poly[number].top[zero]);
		zero = zero + 1;
		if (zero != poly[number].len) {
			printf(" + ");
		}
	}
}
int main() {
	int zero = 0;
	while (zero < 2) {
		readPoly(zero);
		zero = zero + 1;
	}
	zero = 0;
	while (zero < 2) {
		if (zero == 0) {
			printf("多項式A: ");
		}
		if (zero == 1) {
			printf("多項式B: ");
		}
		printPoly(zero);
		printf("\n");
		zero = zero + 1;
	}
	return 0;
}