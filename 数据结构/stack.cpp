#include<iostream>
using namespace std;
typedef struct
{
	int data[100];
	int top;
}Stack1;

typedef struct
{
	char data[100];
	int top;
}Stack2;

int yunsuan(int x, char th, int y)
{
	switch (th)
	{
		case'+':
			return x + y;
		case'*':
			return x * y;
		case'-':
			return x - y;
		case'/':
			return x / y;
		default:
			return 0;
	}
}

int EvaluateExpression(char* str)
{
	char theta;
	int a, b, c, i;
	Stack1 shu;
	Stack2 fu;
	shu.top = -1;
	fu.top = -1;
	fu.data[fu.top + 1] = '#';
	fu.top++;
	i = 0;
	while (str[i] != '#')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			shu.data[shu.top + 1] = str[i] - '0';
			shu.top++;
			i++;
			continue;
		}
		else
		{
			if (fu.data[fu.top] == '(' || fu.data[fu.top] == '#' || (str[i] == '('))
			{
				fu.data[fu.top + 1] = str[i];
				fu.top++; i++;
				continue;
					
			}
			else if (str[i] == ')')
			{
				while (fu.data[fu.top] != '(')
				{
					theta = fu.data[fu.top]; fu.top--;
					a = shu.data[shu.top]; shu.top--;
					b = shu.data[shu.top]; shu.top--;
					c = yunsuan(b, theta, a);
					shu.data[shu.top + 1] = c; shu.top++;
				}
				fu.top--;//去掉栈顶的‘（’
				i++;
				continue;
			}
			else if (str[i] == '+' || str[i] == '-')
			{
				theta = fu.data[fu.top]; fu.top--;
				a = shu.data[shu.top]; shu.top--;
				b = shu.data[shu.top]; shu.top--;
				c = yunsuan(b, theta, a);
				shu.data[shu.top + 1] = c; shu.top++;

			}
			else if ((str[i] == '*' || str[i]=='/') && (fu.data[fu.top] == '+' || fu.data[fu.top] == '-'))
			{
				fu.data[fu.top + 1] = str[i];
				fu.top++;
				i++; continue;
			}
			else if ((str[i] == '*' || str[i] == '/') && (fu.data[fu.top] == '*' || fu.data[fu.top] == '/'))
			{
				theta = fu.data[fu.top]; fu.top--;
				a = shu.data[shu.top]; shu.top--;
				b = shu.data[shu.top]; shu.top--;
				c = yunsuan(b, theta, a);
				shu.data[shu.top + 1] = c; shu.top++;
			}
		}
	}
	while (fu.data[fu.top] != '#')
	{
		theta = fu.data[fu.top]; fu.top--;
		a = shu.data[shu.top]; shu.top--;
		b = shu.data[shu.top]; shu.top--;
		c = yunsuan(b, theta, a);
		shu.data[shu.top + 1] = c; shu.top++;
	 }
	return shu.data[shu.top];
}
int main()
{
	char str[100];
	int a;
	gets_s(str);
	a = EvaluateExpression(str);
	cout << a;
	return 0;
}