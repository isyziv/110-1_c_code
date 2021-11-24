#include <iostream>
using namespace std;

typedef struct IntList* IntListPointer;
int loop = 0;
struct IntList {
	int number = -1;
	IntList* link = NULL;
};
IntListPointer node;
void in(int a)
{
	IntListPointer temp = (IntListPointer)malloc(sizeof(IntListPointer));
	temp->number = a;
	temp->link = node;
	node = temp;
	loop++;
}
string sea(int a)
{
	int boo = 0;
	for (; node->link != NULL;)
	{
		if (loop > 1)cout << node->number << " ";
		else cout << node->number;
		if (a == node->number)boo++;
		node = node->link;
		loop--;
	}
	cout << endl;
	return boo ? " is in the list." : " is not in the list.";
}
int main()
{
	node = (IntListPointer)malloc(sizeof(IntListPointer));
	node->link = NULL;
	node->number = -1;
	int a;
	cin >> a;
	while (a >= 0)
	{
		in(a);
		cin >> a;
	}
	cin >> a;
	cout << a << sea(a);
	return 0;
}