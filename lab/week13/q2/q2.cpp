#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	int in = 0, ina = 0, j = 0;
	for (; in != -1; cin >> in && j++);
	int arr[10000] = { 0 }, arra[10000] = { 0 };
	for (cin >> in; in != -1; cin >> in)
	{
		cin >> ina;
		arr[in]++;
		arra[ina]++;
	}
	for (int i = 0; i < 10000; i++)
	{
		if (arr[i] != 0||arra[i]!=0)cout << i << ":" << arr[i] <<" "<<arra[i] << endl;
	}
	return 0;
}