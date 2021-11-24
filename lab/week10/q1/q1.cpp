#include <bits/stdc++.h>
using namespace std;
int in[100] = { 0 }, i;
int find()
{
	int inp;
	cin >> inp;
	for (int  j = 0; j < i; j++)
	{
		if (in[j] == inp)return j;
	}
	return -1;
}
int main()
{
	for (i = 1; in[i-1] != -1; i++)
	{
		cin >> in[i];
		for (int j = 0; j < i; j++)
		{
			if (in[j]==in[i])
			{
				i--;
			}
		}
	};
	i--;
	in[i] = 0;
	int input = 0;
	int loop = -1;
	for (;input!=-1;)
	{
		if (loop==-1)
		{
			loop++;
		}
		else
		{
			cout << " ";
		}
	go:;
		cin >> input;
		if (input == 1)
		{
			int point = find();
			if (point == -1)
			{
				cout << "-1";
			}
			else
			{
				if (in[point/2]==0)
				{
					cout << "-1" ;
				}
				else
				{
					cout << in[point / 2];
				}
			}
		}
		else if (input == 2)
		{
			int point = find();
			if (point == -1)
			{
				cout << "-1";
			}
			else
			{
				if (in[point * 2] == 0)
				{
					cout << "-1";
				}
				else
				{
					cout << in[point * 2];
				}
			}
		}
		else if (input == 3)
		{
			int point = find();
			if (point == -1)
			{
				cout << "-1";
			}
			else
			{
				if (in[(point * 2) + 1] == 0)
				{
					cout << "-1";
				}
				else
				{
					cout << in[(point * 2)+1];
				}
			}
		}
		else if (input == -1)
		{
			return 0;
		}
		else goto go;
	}
}