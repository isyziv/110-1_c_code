#include <bits/stdc++.h>
using namespace std;
struct link
{
	int var = -1;
	link* node = NULL;
};
link* node_add(link* node, int var)
{
	link* tmp = new link;
	node->var = var;
	tmp->node = node;
	return tmp;
}
link* node_del(link* node)
{
	link* tmp = node;
	node = node->node;
	delete tmp;
	return node;
}
void node_ins(link* node, int var)
{
	link* tmp = node;
	link* ins = new link;
	for (; tmp->node != NULL;)tmp = tmp->node;
	tmp->node = ins;
	ins->var = var;
}
void node_del_end(link* node)
{
	link* tmp = node;
	for (; tmp->node->node != NULL;)tmp = tmp->node;
	tmp->node = node_del(tmp->node);
}
int main()
{
	link* node = new link;
	for (int i = 0; i < 10; i++)
	{
		int tmp = rand();
		cerr << tmp << endl;
		node_add(node, tmp);
	}
	for (int i = 0; i < 3; i++)
	{
		int tmp = rand();
		cerr << tmp << endl;
		node_ins(node, tmp);
	}
	node = node_del(node);
	node_del_end(node);
	cout << endl;
	return 0;
}