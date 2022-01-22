#include <bits/stdc++.h>
using namespace std;
struct node
{
	int a;
	int b;
};
bool cmp(node a, node b)
{
	return a.a < b.a;
}
int main(void)
{
	int a = 0, b = 0;
	for (cin >> a >> b; a != 0 && b != 0; cin >> a >> b)
	{
		vector<node>var[100];
		vector<node>out;
		for (int i = 0; i < b; i++)
		{
			int x, y, z;
			cin >> x >> y >> z;
			node tmp;
			tmp.a = z;
			tmp.b = y;
			var[x].push_back(tmp);
			tmp.b = x;
			var[y].push_back(tmp);
		}
		for (int i = 0; i < a; i++)
			sort(var[i].begin(), var[i].end(), cmp);
		
		cout << "hi";

	}
	return 0;
}