//
//#include <iostream>
//
//using namespace std;
//class Data {
//public:
//    int operator <=(Data a) const
//    {
//        return(f <= a.f);
//    }
//    int s, f;
//};
//void Sort(Data* d, int n)
//{
//    int i, j, flag;
//    Data temp;
//
//    for (i = 1; i <= n; i++) {
//        flag = 0;
//        for (j = n; j > i; j--) {
//            //���ǰһ�������ں�һ�������򽻻�
//            if (d[j] <= d[j - 1]) {
//                temp = d[j];
//                d[j] = d[j - 1];
//                d[j - 1] = temp;
//                flag = 1;
//            }
//        }
//        //�����������û�н���һ�ν�������break��������ִ��֮�䡣
//        if (flag == 0) {
//            break;
//        }
//    }
//}
//int GeedySelector(int n, int s[], int f[], bool a[])
//{
//    Data* d = new Data[n];
//    for (int i = 1; i <= n; i++)
//    {
//        d[i].s = s[i];
//        d[i].f = f[i];
//    }
//    Sort(d, n);
//    /*for(int i=1;i<=n;i++)
//    {
//        cout<<d[i].f<<endl;
//    }*/
//    a[1] = true;
//    int j = 1;
//
//    for (int i = 2; i <= n; i++)
//    {
//        if (d[i].s >= d[j].f)
//        {
//            a[i] = true;
//            j = i;
//
//        }
//        else {
//            a[i] = false;
//        }
//    }
//    int count = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        if (a[i] == true)
//        {
//            cout << "-----" << endl;
//            cout << d[i].s << " " << d[i].f << endl;
//            count++;
//        }
//
//    }
//    return count;
//}
//int main()
//{
//    int n;
//    cout << "����n" << endl;
//    cin >> n;
//    cout << "����n������" << endl;
//    int s[100];
//    int f[100];
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> s[i];
//        cin >> f[i];
//    }
//    bool a[n];
//    int m = GeedySelector(n, s, f, a);
//    cout << "ʣ������ĸ���" << m << endl;
//    return 0;
//}
