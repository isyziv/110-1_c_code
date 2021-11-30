#include <bits/stdc++.h>
using namespace std;
struct link
{
	int var = NULL;
	link* ln = NULL;
	link* rn = NULL;
};
std::vector<int> arr;
link* ins(link* node, int in)
{
	link* tmp = node;
	for (; tmp->var != in;)
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
			if (NULL == tmp->rn)
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

int delete_treenode(link** T, int key) {/*delete_treenode*/
	link* target_current = *T;
	link* target_pre = NULL, * replace_current = NULL, * target_next = NULL;
	/*target_current=刪除目標*//*replace_current=取代值*/
	if (target_current == NULL)return 0;//沒有樹 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	while (key != target_current->var && target_current != NULL) {//找刪除目標 
		if (key < target_current->var) {
			target_pre = target_current;
			target_current = target_current->ln;
		}
		if (key > target_current->var) {
			target_pre = target_current;
			target_current = target_current->rn;
		}
		if (target_current == NULL)return 0;
	}
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	if (target_current->var == key) {//刪除目標找到,開始找取代值&取代 
		if (target_current->rn == NULL) {//沒有右子樹 
			target_next = target_current->ln;
		}
		else if (target_current->ln == NULL) {//沒有左子樹 
			target_next = target_current->rn;
		}
		else {//都有 
			target_pre = target_current;
			replace_current = target_current->ln;
			while (replace_current->rn != NULL) {//左子樹最大值 
				target_pre = replace_current;
				replace_current = replace_current->rn;
			}
			target_current->var = replace_current->var;
			target_current = replace_current;//取代目標 
			target_next = replace_current->ln;
		}
		if (target_pre == NULL)T = NULL;//整棵樹只有一個節點 
		else if (target_current == target_pre->rn)target_pre->rn = target_next;//處理取代值上下節點 
		else {//處理取代值上下節點
			target_pre->ln = target_next;
		}
		free(target_current);//88
		return 1;
	}
	return 0;
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
	int del = 0;
	for (cin >> del; del != -1; cin >> del)
	{
		delete_treenode(&node, del);
	}
	inorder(node);
	return 0;
}