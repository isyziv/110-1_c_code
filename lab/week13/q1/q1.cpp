#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	int in=0,ina=0,j=0;
	for (; in != -1; cin >> in&&j++);
	int arr[30][30] = {0};
	for (cin >> in; in != -1; cin >> in)
	{
		cin >> ina;
		arr[in][ina] = arr[ina][in] = 1;
	}
	for (int i = 0; i < 30; i++)
	{
		int loop = 0;
		for (int k = 0; k < 30; k++)
		{
			loop += arr[i][k];
		}
		if (loop != 0)cout << i << ":" << loop<<endl;
	}
	return 0;
}