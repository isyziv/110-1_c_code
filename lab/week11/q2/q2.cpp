#include <bits/stdc++.h>
using namespace std;
int main()
{
	int in[20] = { 0 };
	int a;
	int tmp;
	int i = 1;
	for (cin >> tmp; tmp >= 0; cin >> tmp)
	{
		if (tmp == 1)
		{
			if (i < 11)
			{

				cin >> in[i];
				if (i != 1)
				{
					if (in[i] < in[i / 2])swap(in[i], in[i / 2]);
				}
				i++;
			}
		}
		if (tmp == 2)
		{
			if (i == 1)
			{
				cout << "The heap is empty, No deletion made." << endl;
			}
			else
			{
				in[1] = 0;
				tmp = 1;
				for (int k = 0; k < 3; k++)
				{
					if (in[tmp * 2] > in[tmp * 2 + 1])
					{
						in[tmp] = in[tmp * 2 + 1];
						in[tmp * 2 + 1] = 0;
						tmp *= 2;
						tmp++;
					}
					else
					{
						in[tmp] = in[tmp * 2];
						in[tmp * 2] = 0;
						tmp *= 2;
					}

				}


			}
		}

	}
	for (int j = 1; j + 1 <= i; j++)
	{
		if (in[j] != 0)
		{
			cout << "[" << j << "]" << " = " << in[j] << endl;

		}
	}
	return 0;
}
