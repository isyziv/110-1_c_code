#include <bits/stdc++.h>
using namespace std;
int in[100];
int ts = 0, tts = 0;
void quick_sort(int data[], int left, int right) {
	if (left < right) {
		int i = left + 1, j = right, splitting = data[left], temp;
		do {
			while (i < right && data[i] <= splitting)
				i++;   // Note the "<" and "<="
			while (j > left && data[j] > splitting)
				j--;   //printf("%d*%d**",i,j);
			if (i < j) {
				ts++;
				swap(data[i], data[j]);// Note this line, swap data[i + 1] and data[i]
			}
		} while (i < j);
		if (data[j] != data[left]) {
			ts++;
			swap(data[left], data[j]);
		}
		// Note this line, swap data[j] and the data[left] (splitting)
		quick_sort(data, left, j - 1);
		quick_sort(data, j + 1, right);
	}
}
int main(void)
{
	int loop;
	for (cin >> loop; loop != 0; loop--)
	{
		ts = 0;
		for (int i = 0; i != 100; ++i)
			in[i] = 0;
		int i = 0;
		for (cin >> in[i]; in[i] != -1; ++i && cin >> in[i]);
		i--;
		quick_sort(in, 0, i);
		cout << "Swap " << ts << " times" << endl;
		tts += ts;
	}
	cout << "Total Swap " << tts << " times" << endl;
	return 0;
}
