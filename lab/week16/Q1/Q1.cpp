#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	int lop;
	for (cin>>lop;lop!=0;lop--)
	{
		int num,ck;
		vector <int> arr;
		for (cin>>num;num!=-1;cin>>num)
			arr.push_back(num);
		cin >> ck;
		auto it = find(arr.begin(), arr.end(), ck);
		if (it != arr.end())
			cout << it-arr.begin() << "\n";
		else
			cout << "-1\n";
	}
	return 0;
}