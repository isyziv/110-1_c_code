#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	int lop;
	for (cin >> lop; lop != 0; lop--)
	{
		int num, ck;
		vector <int> arr;
		for (cin >> num; num != -1; cin >> num)
			arr.push_back(num);
		sort(arr.begin(), arr.end());
		cin >> ck;
		bool out = binary_search(arr.begin(), arr.end(), ck);
		if (out)
			cout << "Found" << endl;
		else
			cout << "Not found" << endl;
	}
	return 0;
}