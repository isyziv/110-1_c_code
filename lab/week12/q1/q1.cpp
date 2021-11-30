#include <bits/stdc++.h>
using namespace std;
struct link
{
	int var = NULL;
	link* ln = NULL;
	link* rn = NULL;
};
link* ins(link* node, int in)
{
	link* tmp = node;
	for (;tmp->var != in;)
	{
		if (tmp->var > in)
		{ 
			if (NULL == tmp->ln)
			{
				link* ntmp = new link();
				ntmp->var = in;
				tmp->ln = ntmp;
				return node;
			}
			else tmp = tmp->ln;
		}
		else if (tmp->var < in)
		{
			if (NULL==tmp->rn)
			{
				link* ntmp = new link();
				ntmp->var = in;
				tmp->rn = ntmp;
				return node;
			}
			else tmp = tmp->rn;
		}
	}
	cout << "新增節點失敗" << endl;
	return node;
}
void inorder(link* cur) {
	if (cur != NULL) {
		inorder(cur->ln);
		printf("%d ", cur->var);
		inorder(cur->rn);
	}
}
int main(void)
{
	int tmp = NULL;
	link* node = new link();
	cin >> node->var;
	for (cin >> tmp; tmp != -1; cin >> tmp)
	{
		node = ins(node, tmp);
	}
	inorder(node);
	return 0;
}