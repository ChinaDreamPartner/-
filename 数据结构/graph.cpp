#define MAXNODE 64
#include<iostream>
using namespace std;
typedef struct ArcNode//边表结点
{
	int adjvex;//邻接点在顶点向量中的下标
	struct ArcNode* next;//指向下一邻接点的指针
}ArcNode;

typedef struct//顶点结点
{
	int data;
	int in;
	ArcNode* firstarc;
}VerNode;

int vexnum, arcnum;
int visited[MAXNODE];

void CreatAdjList(VerNode G[MAXNODE])
{
	int n, m = 0;
	ArcNode* p;
	int i, v1, v2;
	int ch;
	cin >> n >> m;
	vexnum = n; arcnum = m;
	getchar();
	for (i = 1; i <= n; i++)
	{
		cin >> ch;
		G[i].data = ch;
		G[i].in = 0;
		G[i].firstarc = NULL;
		visited[i] = 0;
	}
	//getchar();
	for (i = 1; i <= m; i++)
	{
		cin >> v1 >> v2;
		p = new ArcNode;//建立邻接点
		p->adjvex = v2;

		p->next = G[v1].firstarc;//头插法
		G[v1].firstarc = p;

		/*q = new ArcNode;
		q->adjvex = v1;
		q->next = G[v2].firstarc;
		G[v2].firstarc = q;*/
	}
}

void In(VerNode G[])//求入度
{
	ArcNode* p;
	int j, k;
	for (j = 0; j < vexnum; j++)
	{
		p = G[j].firstarc;
		while (p != NULL)
		{
			k = p->adjvex;
			G[k].in++;
			p = p->next;
		}
	}
}

void topsort(VerNode G[])
{
	int top, m, k, j, s[MAXNODE];
	ArcNode* p;
	In(G);
	top = 0; m = 0;
	for (j = 1; j <= vexnum; j++)
		if (G[j].in == 0)
			s[top++] = j;
	
	while (top > 0)
	{
		j = s[--top];
		cout << 'v' << G[j].data << ' ';
		m++;
		p = G[j].firstarc;
		while (p != NULL)
		{
			k = p->adjvex;
			G[k].in--;
			if (G[k].in == 0)
				s[top++] = k;
			p = p->next;
		}
	}
}


int main()
{
	VerNode G[MAXNODE];
	CreatAdjList(G);
	topsort(G);
	return 0;
}