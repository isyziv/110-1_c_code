#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	char a, b, last;
	vector<char> var, node[300],pri;
	cin >> a;
	last = a;
	for (; a != '-'; cin >> a)
	{
		cin >> b;
		node[a].push_back(b);
	}
	for (; 0 != node[last].size();)
	{
		var.push_back(node[last][node[last].size() - 1]);
		node[last].pop_back();
	}
	cout << last;
	pri.push_back(last);
	node[last].push_back('\n');
	for (last = var[0];  1!= var.size(); last = var[0])
	{
		var.erase(var.begin());
		cout << last;
		pri.push_back(last);
		for (int i = 0; 0 != node[last].size();)
		{
			if ((std::find(var.begin(), var.begin() + var.size() - 1, node[last][node[last].size() - 1])) == var.begin() + var.size() - 1)
				if ((std::find(pri.begin(), pri.begin() + pri.size() - 1, node[last][node[last].size() - 1])) == pri.begin() + pri.size() - 1)
					if(node[last][node[last].size() - 1]!=var[var.size()-1])
					{
						var.insert(var.begin() + i, node[last][node[last].size() - 1]);
						i++;
					}
			node[last].pop_back();
		}
	}
	//cout << var[0];
	return 0;
}