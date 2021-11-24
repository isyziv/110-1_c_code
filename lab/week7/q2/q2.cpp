#include<iostream>
using namespace std;
typedef struct polynode* poly;
struct polynode
{

	int number = -1;
	int pow = -1;
	polynode* next = NULL;
};
poly nodea;
poly nodeb;

int a[100] = { 0 };
void ins(int in)
{
	poly tmp = (poly)malloc(sizeof(struct polynode));
	if (in)
	{
		tmp->number = -1;
		tmp->pow = -1;
		tmp->next = nodeb;
		nodeb = tmp;
		//tmp = NULL;
	}
	else
	{	
		tmp->number = -1;
		tmp->pow = -1;
		tmp->next = nodea;
		nodea = tmp;
		//tmp = NULL;
	}
}
int main()
{
	nodea = (poly)malloc(sizeof(struct polynode));
	nodeb = (poly)malloc(sizeof(struct polynode));
	int a, b;
	cin >> a >> b;
	while (a != 0 || b != 0)
	{
		nodea->number = a;
		nodea->pow = b;
		ins(0);
		cin >> a >> b;
	}
	cin >> a >> b;
	while (a != 0 || b != 0)
	{
		nodeb->number = a;
		nodeb->pow = b;
		ins(1);
		cin >> a >> b;
	}
	cout << " ";


	return 0;
}