#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
//����ʱ
//����������������5 3 6 8 1 7
//���룺4
//ɾ��: 7
//���ң�5�ɹ�,0ʧ��
//ASL��11/6=1.83333
typedef struct BSTNode//�����������洢�ṹ
{
    int key;
    struct  BSTNode *lchild,*rchild;
}BSTNode,*BSTree;

void InsertBST(BSTree &T,int key)//�����������Ĳ���
{
    BSTree S;
    S=(BSTree)malloc(sizeof(BSTNode));
    S->key=key;
    S->lchild=S->rchild=NULL;
    if(T==NULL)  T=S;
    else
    {
        if(T->key==key)//������ֵ�ظ�ʱ�������
            return ;
        else if(S->key<T->key)
            InsertBST(T->lchild,key);//������ֵС��Tָ��ֵʱ������������
        else
            InsertBST(T->rchild,key);//������ֵС��Tָ��ֵʱ������������
    }
}
void DipBSTree(const BSTree &T)//�������������
{
    if(T!=NULL)
    {
        DipBSTree(T->lchild);
        cout<<T->key<<ends;
        DipBSTree(T->rchild);
    }
}
void SearchBSTree(const BSTree &T,int key)//�����������Ĳ���
{
    if(T==NULL)
    {
        cout<<"����ʧ�ܣ�������������û��"<<key<<"�����"<<endl;
    }
    else
    {
        if(T->key==key)
        {
            cout<<"���ҳɹ�,��������������"<<key<<"�����"<<endl;
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
void DeleteBSTree(BSTree &T,int t)//ɾ��������������Ԫ��
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
int node_depth(BSTree &T,int key)//������
{
   int d;
   if(T==NULL)
   return 0;
   if(T->key==key) //�ڸ��ڵ㴦������1��
   return 1;
   d = node_depth(T->lchild, key);//����ڵ�
   if(d>0)
   return d+1; //���ص�ǰ����+1
   d = node_depth(T->rchild, key); //���ҽڵ�
   if(d>0)
   return d+1; //���ص�ǰ����+1
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



    //��������������
    printf("******************\n");
    printf("1.��������������\n");
    printf("2.�ڶ����������в���Ԫ��\n");
    printf("3.ɾ��������������Ԫ��\n");
    printf("4.��ѯ������������Ԫ��\n");
    printf("5.ƽ�����ҳ���ASLֵ\n");
    printf("6.�˳�����\n");
    printf("******************\n");
    printf("��ѡ�������Ų����س�:");
        scanf("%d",&y);
        switch(y)
        {
        case 1:
            {
                cout<<"*�������������";
                T=NULL;
                cin>>n;
                cout<<"*������"<<n<<"�����ݣ�";
                for(i=1;i<=n;++i)
                {
                cin>>key[i];
                InsertBST(T,key[i]);
                }
                cout<<"*******�����������������*******\n";
                cout<<endl;
                break;
            }

        case 2:
            {
                cout<<"������Ҫ�����ֵ��\n";
                cin>>k1;
                InsertBST(T,k1);
                cout<<"������ɺ����������Ϊ��\n";
                DipBSTree(T);
                printf("\n");
                printf("********************************");
                break;
            }
        case 3:
            {
                cout<<"������Ҫɾȥ��ֵ��\n";
                cin>>k2;
                SearchBSTree(T,k2);
                DeleteBSTree(T,k2);
                cout<<"ɾ��ֵΪ"<<k2<<"��Ԫ�غ����������Ϊ��"<<endl;
                DipBSTree(T);
                printf("\n");
                printf("********************************\n");
                break;
            }
        case 4:
            {
                cout<<"������Ҫ��ѯ��ֵ��\n";
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
                cout<<"�ö�����������ƽ�����ҳ���ASLΪ��"<<sum/n<<endl;

            }
        case 6: a=0;

            break;
        default:
            printf("��������ȷ���!\n");
            break;

        }
    }
    return 0;
}
