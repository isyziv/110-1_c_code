#include <bits/stdc++.h>
using namespace std;
struct node
{
	int a;
	int b;
	int ck;
};
bool cmp(node a,node b)
{
	return a.ck<b.ck;
}
int main(void)
{
	int ck[100] = { 0 };
	int a = 0,b=0;
	for (cin>>a>>b;a!=0&&b!=0;cin>>a>>b)
	{
		vector<node> out;
		vector<int>oout;
		for (int i = 0; i < b; i++)
		{
			node tmp;
			cin >> tmp.a>>tmp.b>>tmp.ck;
			out.push_back(tmp);
		}
		sort(out.begin(), out.end(), cmp);
		for (int i = 0; i < b; i++)
		{
			ck[out[i].a]++;
			ck[out[i].b]++;
			oout.push_back(out[i].ck);
			int j = 0;
			for (int k = 1; k < a+1; k++)
			{
				if (ck[k] == 0)
					j = 1;
			}
			if (j == 0)break;
		}
		cout << oout[oout.size() - 1] - oout[0];
	}
	return 0;
}