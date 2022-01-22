#include <bits/stdc++.h>
using namespace std;
int min(int x, int y) {
	return x < y ? x : y;
}
void merge_sort(int arr[], int len) {
	int* a = arr;
	int* b = (int*)malloc(len * sizeof(int));
	int seg, start;
	for (seg = 1; seg < len; seg += seg) {
		for (start = 0; start < len; start += seg * 2) {
			int low = start, mid = min(start + seg, len), high = min(start + seg * 2, len);
			int k = low;
			int start1 = low, end1 = mid;
			int start2 = mid, end2 = high;
			while (start1 < end1 && start2 < end2)
				b[k++] = a[start1] < a[start2] ? a[start1++] : a[start2++];
			while (start1 < end1)
				b[k++] = a[start1++];
			while (start2 < end2)
				b[k++] = a[start2++];
		}
		int* temp = a;
		a = b;
		b = temp;
	}
	if (a != arr) {
		int i;
		for (i = 0; i < len; i++)
			b[i] = a[i];
		b = a;
	}
	free(b);
}
int main(void)
{
	int loop;
	for (cin >> loop; loop != 0; loop--)
	{
		int in[100] = { 0 };
		int i = 0;
		for (cin >> in[i]; in[i] != -1; ++i && cin >> in[i]);
		merge_sort(in, i);
		if (i % 2 != 0)
			cout << "Median = "<< in[i / 2] << endl;
		else
			printf("Median = %.2f\n",((float)in[i / 2] + in[i / 2-1]) /2);
	}
	return 0;
}