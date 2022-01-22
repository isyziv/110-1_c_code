#include <bits/stdc++.h>
using namespace std;
int main()
{
	int in[11];
	int a;
	int tmp;
	int i = 1;
	for (cin >> tmp; tmp >= 0; cin >> tmp)
	{
		if (i < 11)
		{
			in[i] = tmp;
			if (i != 1)
			{
				if (in[i] < in[i / 2])swap(in[i], in[i / 2]);
			}
			i++;
		}
		else
		{
			cout << "The heap is full, No insertion made" << endl;
		}
	}
	//asort(in, in + i+1);
	for (int j = 1; j + 1 <= i; j++)
	{
		cout << "[" << j << "]" << " = " << in[j] << endl;
	}

	return 0;
}