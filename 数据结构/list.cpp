#include<iostream>
using namespace std;

struct node
{
	int x = 0;
	int data = 0;
	node* next;
};
void insert(node*& p)
{
	node* q;
	q = new node;
	q->next = p->next;
	p->next = q;
}

void _delete(node*& p)
{
	node* q;
	q = p;
	while (q->next != p)
		q = q->next;
	q->next = p->next;
	delete p;
	p = q->next;
}

int empty(node* p)
{
	int i = 1;
	node* q;
	q = p;
	while (q->next != p)
	{
		i++;
		q = q->next;
		
	}
	return i;
}
void _bianhao(node*& p)
{
	node* r;
	r = p;
	int i = 1;
	while (r->next != p)
	{
		r->x = i;
		i++;
		r = r->next;
	}
	r->x = i;

}
int execute(node* p,int k)
{
	int i = 1;
	while (empty(p) != 1)
	{
		p->data = i;
		i++;
		if (p->data % k == 0)
		{
			_delete(p);
			continue;
		}
		p = p->next;
	}
	return p->x;

}

int main()
{
	int n, k;
	cin >> n >> k;
	switch (n)
	{
	case 1:
		cout << "1胜出";
		break;
	case 2:
		k %= 2;
		if (k == 1)
			cout << "2号胜出";
		else
			cout << "1号胜出";
		break;
	default:
		node* p, *q;
		p = new node;
		q = new node;
		p->next = q;
		q->next = p;
		n -= 2;
		int i;
		for (i = 0; i < n; i++)
		{
			insert(p);
		}
		_bianhao(p);
		//execute(p, k);
		cout << execute(p, k) << "号胜出";
		break;
	}
	return 0;
}