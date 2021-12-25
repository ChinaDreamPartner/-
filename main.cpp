#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
//测试时
//创建二叉排序树：5 3 6 8 1 7
//插入：4
//删除: 7
//查找：5成功,0失败
//ASL：11/6=1.83333
typedef struct BSTNode//二叉排序树存储结构
{
    int key;
    struct  BSTNode *lchild,*rchild;
}BSTNode,*BSTree;

void InsertBST(BSTree &T,int key)//二叉排序树的插入
{
    BSTree S;
    S=(BSTree)malloc(sizeof(BSTNode));
    S->key=key;
    S->lchild=S->rchild=NULL;
    if(T==NULL)  T=S;
    else
    {
        if(T->key==key)//当输入值重复时不予插入
            return ;
        else if(S->key<T->key)
            InsertBST(T->lchild,key);//当输入值小于T指向值时，插入左子树
        else
            InsertBST(T->rchild,key);//当输入值小于T指向值时，插入右子树
    }
}
void DipBSTree(const BSTree &T)//输出二叉排序树
{
    if(T!=NULL)
    {
        DipBSTree(T->lchild);
        cout<<T->key<<ends;
        DipBSTree(T->rchild);
    }
}
void SearchBSTree(const BSTree &T,int key)//二叉排序树的查找
{
    if(T==NULL)
    {
        cout<<"查找失败，二叉排序树中没有"<<key<<"这个数"<<endl;
    }
    else
    {
        if(T->key==key)
        {
            cout<<"查找成功,二叉排序树中有"<<key<<"这个数"<<endl;
        }
        else if(key<T->key)
        {
            SearchBSTree(T->lchild,key);
        }
        else
        {
            SearchBSTree(T->rchild,key);
        }
    }
}
void DeleteBSTree(BSTree &T,int t)//删除二叉排序树中元素
{
        BSTree p,q,f,s;
        p=T;
        f=NULL;
        while(p)
        {
            if(p->key==t)
            break;
            f=p;
            if(p->key>t)
            p=p->lchild;
            else
            p=p->rchild;
        }
        if(!p)
        return;
        q=p;
        if((p->lchild)&&(p->rchild))
        {
            s=p->lchild;
            while(s->rchild)
            {
                q=s;
                s=s->rchild;
            }
            p->key=s->key;
            if(q!=p)q->rchild=s->lchild;
            else
            q->lchild=s->lchild;
            delete s;
            return;
        }
        else if(!(p->lchild))
        {
            p=p->rchild;
        }
        else if(!(p->rchild))
        p=p->lchild;
        if(!f) T=p;
        else if(q==f->lchild)
        f->lchild=p;
        else
        f->rchild=p;
        delete q;
}
int node_depth(BSTree &T,int key)//结点深度
{
   int d;
   if(T==NULL)
   return 0;
   if(T->key==key) //在根节点处，即第1层
   return 1;
   d = node_depth(T->lchild, key);//找左节点
   if(d>0)
   return d+1; //返回当前层数+1
   d = node_depth(T->rchild, key); //找右节点
   if(d>0)
   return d+1; //返回当前层数+1
   return 0;
}
int main()
{
    BSTree T=NULL;
    int i,k,y,k1,k2,k3,n;
    int a=1;
    int key[20];
    while(a)
    {



    //创建二叉排序树
    printf("******************\n");
    printf("1.创建二叉排序树\n");
    printf("2.在二叉排序树中插入元素\n");
    printf("3.删除二叉排序树中元素\n");
    printf("4.查询二叉排序树中元素\n");
    printf("5.平均查找长度ASL值\n");
    printf("6.退出操作\n");
    printf("******************\n");
    printf("请选择操作序号并按回车:");
        scanf("%d",&y);
        switch(y)
        {
        case 1:
            {
                cout<<"*请输入结点个数：";
                T=NULL;
                cin>>n;
                cout<<"*请输入"<<n<<"个数据：";
                for(i=1;i<=n;++i)
                {
                cin>>key[i];
                InsertBST(T,key[i]);
                }
                cout<<"*******二叉排序树创建完成*******\n";
                cout<<endl;
                break;
            }

        case 2:
            {
                cout<<"请输入要插入的值：\n";
                cin>>k1;
                InsertBST(T,k1);
                cout<<"插入完成后二叉排序树为：\n";
                DipBSTree(T);
                printf("\n");
                printf("********************************");
                break;
            }
        case 3:
            {
                cout<<"请输入要删去的值：\n";
                cin>>k2;
                SearchBSTree(T,k2);
                DeleteBSTree(T,k2);
                cout<<"删除值为"<<k2<<"的元素后二叉排序树为："<<endl;
                DipBSTree(T);
                printf("\n");
                printf("********************************\n");
                break;
            }
        case 4:
            {
                cout<<"请输入要查询的值：\n";
                cin>>k3;
                SearchBSTree(T,k3);
                printf("\n");
                printf("********************************\n");
                break;
            }
        case 5:
            {
                double sum=0;
                for(i=1;i<=n;i++)
                {
                    sum+=node_depth(T,key[i]);
                }
                cout<<"该二叉排序树的平均查找长度ASL为："<<sum/n<<endl;

            }
        case 6: a=0;

            break;
        default:
            printf("请输入正确序号!\n");
            break;

        }
    }
    return 0;
}
