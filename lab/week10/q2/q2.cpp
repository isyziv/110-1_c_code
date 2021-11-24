#include <bits/stdc++.h>
using namespace std;
struct tree
{
	int var=NULL;
	tree* lnode=NULL;
	tree* rnode=NULL;
};
tree* node = NULL;
void ins(int in)
{
	tree* tmp = node;
	while (1)
	{
		if(tmp->var==in && tmp->var != 0)
		{
			return ;
		}
		else  if(tmp->var>in && tmp->var != 0)
		{
			if (tmp->lnode == NULL)
			{
				tmp->lnode = new tree;
			}
			tmp = tmp->lnode;
		}
		else if (tmp->var < in&&tmp->var!=0)
		{
			if (tmp->rnode==NULL)
			{
				tmp->rnode = new tree;
			}
			tmp = tmp->rnode;
		}
		else 
		{
			tmp->var = in;
			return;
		}
	}
}
int find(int in)
{
	tree* tmp = node;
	while (1)
	{
		if (tmp->var == in && tmp->var != 0)
		{
			return 1;
		}
		else  if (tmp->var > in && tmp->var != 0)
		{
			if (tmp->lnode == NULL)
			{
				return 0;
			}
			tmp = tmp->lnode;
		}
		else if (tmp->var < in && tmp->var != 0)
		{
			if (tmp->rnode == NULL)
			{
				return 0;
			}
			tmp = tmp->rnode;
		}
	}
}
int main() 
{
	int input;
	for (cin >> input;input!=-1;cin>>input)
	{
		if (node==NULL)
		{
			node = new tree;
			node->var = input;
		}
		else
		{
			ins(input);
		}
	}
	for (cin >> input; input != -1; cin >> input)
	{
		if (find(input)==1)
		{
			cout << "found" << endl;
		}
		else
		{
			cout<<"not found" << endl;

		}
	}
}