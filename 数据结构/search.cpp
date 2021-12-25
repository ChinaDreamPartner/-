#include <iostream>
#include <cstring>
using namespace std;
typedef struct student
{
	char num[7];
	int grade;//成绩
}Elem;


typedef struct node
{
	Elem key;
	node* lchild, * rchild;
}BSTNode, * BSTree;

BSTNode* pre = NULL;

int found(BSTree T, BSTree student)
{
	BSTree p = T;
	while (p != NULL)
	{
		if (strcmp(p->key.num, student->key.num)==0)
			return 1;
		else
			if (strcmp(p->key.num , student->key.num)>0)
			{
				pre = p;
				p = p->lchild;
			}
			else
			{
				pre = p;
				p = p->rchild;
			}
		// return 0;
	}
	return 0;
}

BSTree insert(BSTree T, BSTree key)
{
	if (found(T, key) == 0)
	{
		BSTree s;
		s = new BSTNode;
		s = key;
		s->lchild = NULL;
		s->rchild = NULL;
		if (T == NULL)
			T = s;
		else if (strcmp(s->key.num , pre->key.num)<0)
			pre->lchild = s;
		else
			pre->rchild = s;
	}
	return T;
}

void InOrderTraverse(BSTree T)
{
	if (T)
	{

		InOrderTraverse(T->lchild);
		puts(T->key.num);
		cout << ' ' << T->key.grade << endl;
		InOrderTraverse(T->rchild);

	}
}



void _delete(BSTree& T, BSTree student)
{
	BSTree s;
	int t;
	pre = NULL;
	if (found(T, student) == 1)
	{
		//cout << "1111";
		if (strcmp(student->key.num, pre->key.num) > 0)
		{
			s = pre->rchild;
			t = 0;
		}
		else
		{
			t = 1;
			s = pre->lchild;
		}

		if (s->lchild == NULL && s->rchild == NULL)
		{
			if (t == 0)
			{
				pre->rchild = NULL;

			}
			else
			{
				pre->lchild = NULL;

			}
			return;
		}
		if (s->lchild != NULL && s->rchild == NULL)
		{
			if (t == 0)
			{
				pre->rchild = s->lchild;

			}
			else
				pre->lchild = s->lchild;
			delete s;
			return;
		}
		if (s->rchild != NULL && s->lchild == NULL)
		{
			if (t == 0)
			{
				pre->rchild = s->rchild;
			}
			else
				pre->lchild = s->rchild;
			delete s;
			return;
		}
		if (s->rchild != NULL && s->lchild != NULL)
		{
			//删除S结点
			BSTree l, le;
			l = s->lchild;
			le = l;
			while (le->rchild != NULL)
			{
				le = le->rchild;
			}
			le->rchild = s->rchild;
			if (t == 0)
			{
				pre->rchild = l;
				//s为r

			}
			else
			{
				pre->lchild = l;
				//s为l

			}
			delete s;
			return;

			/*BSTree l, le;
			le = s;
			l = s->lchild;
			while (l->rchild != NULL)
			{
				le = l; l = l->rchild;
			}
			s->key = l->key;
			le->rchild = l->lchild;
			delete l;
			return;*/
		}
	}
	else
		cout << "删除失败" << endl;
}


int Depth(BSTree T)
{
	int depl, depr;
	if (T == NULL)
		return 0;
	else
	{
		depl = Depth(T->lchild);
		depr = Depth(T->rchild);
		if (depl >= depr)
			return (depl + 1);
		else
			return (depr + 1);
	}
}


int Size(BSTree T)//节点数
{
	if (T == NULL) return 0;
	else return (1 + Size(T->lchild) + Size(T->rchild));
}

int LeafCount(BSTree T)
{
	if (!T)
		return 0;
	else
	{
		if (T->lchild == NULL && T->rchild == NULL) return 1;
		else return LeafCount(T->lchild) + LeafCount(T->rchild);
	}
}



int main()
{
	BSTree T;
	T = NULL;
	cout << "请输入学生人数：";
	
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{ 
		cout << "学生" << i+1 << ':';
	BSTree student;
	student = new BSTNode;
	cout << endl;
	cout << "请输入学号：";
	getchar();
	//scanf_s("%s", student->key.num);
	gets_s(student->key.num);
	//getchar();
	//cout << endl;
	cout << "请输入成绩：";
	cin >> student->key.grade;
	T = insert(T, student);
	}
	cout << "成绩排名："<<endl;
	InOrderTraverse(T);
	cout << endl;


	/*cout << "输入要查找的学生的学号：";
	BSTree student1;
	student1 = new BSTNode;
	getchar();
	gets_s(student1->key.num);

	int y = found(T, student1);
	if (y == 1)
		cout << "此学生存在";
	else
		cout << "此学生不存在";
	cout << endl;*/
	cout << "请输入要删除的学生学号: ";
	BSTree del;
	del =new BSTNode;
	getchar();
	gets_s(del->key.num);
	_delete(T, del);
	cout << "删除后的排名结果：" << endl;
	InOrderTraverse(T);

	return 0;
}
