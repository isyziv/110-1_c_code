#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	int ina, inb,a,b,c;
	char tr;
	int out[100][100] = {0};
	for (cin >> ina >> tr >> inb; inb > 0; inb--)
	{
		cin >> a >> tr >> b >> tr >> c;
		out[a][b] = c;
	}
	for (int i = 1; i <= ina; i++)
	{
		for (int j = 1; j <= ina; j++)
		{
			if (j == 1) cout << out[i][j];
			else cout << " " << out[i][j];
		}
		cout << endl;
	}
	return 0;
}