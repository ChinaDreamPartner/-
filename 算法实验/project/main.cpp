//////#include <iostream>
//////#include <string>
//////#include <math.h>
//////#include <algorithm>
//////#include <vector>
//////using namespace std;
//////int tile = 1;
//////int** board;
//////void chessBoard(int tr, int tc, int dr, int dc, int size)
//////{
//////    if (size == 1)
//////        return;
//////    int t = tile++;   // L�͹��ƺ�
//////    int s = size / 2; // �ָ�����
//////                      // �������Ͻ�������
//////    if (dr < tr + s && dc < tc + s)
//////        // ���ⷽ���ڴ�������
//////        chessBoard(tr, tc, dr, dc, s);
//////    else
//////    {   // �������������ⷽ��
//////        // �� t ��L�͹��Ƹ������½�
//////        board[tr + s - 1][tc + s - 1] = t;
//////        // �������෽��
//////        chessBoard(tr, tc, tr + s - 1, tc + s - 1, s);
//////    }
//////    // �������Ͻ�������
//////    if (dr < tr + s && dc >= tc + s)
//////        // ���ⷽ���ڴ�������
//////        chessBoard(tr, tc + s, dr, dc, s);
//////    else
//////    {   // �������������ⷽ��
//////        // �� t ��L�͹��Ƹ������½�
//////        board[tr + s - 1][tc + s] = t;
//////        // �������෽��
//////        chessBoard(tr, tc + s, tr + s - 1, tc + s, s);
//////    }
//////    // �������½�������
//////    if (dr >= tr + s && dc < tc + s)
//////        // ���ⷽ���ڴ�������
//////        chessBoard(tr + s, tc, dr, dc, s);
//////    else
//////    { // �� t ��L�͹��Ƹ������Ͻ�
//////        board[tr + s][tc + s - 1] = t;
//////        // �������෽��
//////        chessBoard(tr + s, tc, tr + s, tc + s - 1, s);
//////    }
//////    // �������½�������
//////    if (dr >= tr + s && dc >= tc + s)
//////        // ���ⷽ���ڴ�������
//////        chessBoard(tr + s, tc + s, dr, dc, s);
//////    else
//////    { // �� t ��L�͹��Ƹ������Ͻ�
//////        board[tr + s][tc + s] = t;
//////        // �������෽��
//////        chessBoard(tr + s, tc + s, tr + s, tc + s, s);
//////    }
//////}
//////
//////class Solution {
//////public:
//////    string getDigits(string& s, size_t& ptr) {
//////        string ret = "";
//////        while (isdigit(s[ptr])) {
//////            ret.push_back(s[ptr++]);
//////        }
//////        return ret;
//////    }
//////
//////    string getString(vector <string>& v) {
//////        string ret;
//////        for (const auto& s : v) {
//////            ret += s;
//////        }
//////        return ret;
//////    }
//////
//////    string decodeString(string s) {
//////        vector <string> stk;
//////        size_t ptr = 0;
//////
//////        while (ptr < s.size()) {
//////            char cur = s[ptr];
//////            if (isdigit(cur)) {
//////                // ��ȡһ�����ֲ���ջ
//////                string digits = getDigits(s, ptr);
//////                stk.push_back(digits);
//////            }
//////            else if (isalpha(cur) || cur == '[') {
//////                // ��ȡһ����ĸ����ջ
//////                stk.push_back(string(1, s[ptr++]));
//////            }
//////            else {
//////                ++ptr;
//////                vector <string> sub;
//////                while (stk.back() != "[") {
//////                    sub.push_back(stk.back());
//////                    stk.pop_back();
//////                }
//////                reverse(sub.begin(), sub.end());
//////                // �����ų�ջ
//////                stk.pop_back();
//////                // ��ʱջ��Ϊ��ǰ sub ��Ӧ���ַ���Ӧ�ó��ֵĴ���
//////                int repTime = stoi(stk.back());
//////                stk.pop_back();
//////                string t, o = getString(sub);
//////                // �����ַ���
//////                while (repTime--) t += o;
//////                // ������õ��ַ�����ջ
//////                stk.push_back(t);
//////            }
//////        }
//////
//////        return getString(stk);
//////    }
//////};
//////
//////class Person
//////{
//////public:
//////    int x, y;
//////
//////    Person(int x, int y)
//////    {
//////        this->x = x;
//////        this->y = y;
//////        cout << "goood" << endl;
//////    }
//////
//////    /*~Person()
//////    {
//////        cout << "over" << endl;
//////    }*/
//////    ~Person() {};
//////};
//////
//////class one
//////{
//////public:
//////    one()
//////    {
//////    }
//////
//////    ~one()
//////    {
//////    }
//////
//////private:
//////
//////};
//////
//////
//////int main()
//////{
//////
//////    /*Person* p;
//////    p = new Person(1, 2);
//////    delete p;*/
//////
//////    Person p(1, 2);
//////
//////
//////    //~Person();
////// /*   int n;
//////    cin >> n;
//////    board = (int**)malloc(sizeof(int*) * n);
//////    int i, j;
//////    for (i = 0; i < n; i++)
//////    {
//////        board[i] = (int*)malloc(sizeof(int) * n);
//////    }
//////    for (i = 0; i < n; i++)
//////    {
//////        for (j = 0; j < n; j++)
//////        {
//////            board[i][j] = 0;
//////        }
//////    }
//////    board[0][2] = 0;
//////
//////    chessBoard(0, 0, 0, 2, n);
//////
//////    for (i = 0; i < n; i++)
//////    {
//////        for (j = 0; j < n; j++)
//////        {
//////            cout << board[i][j] << " ";
//////        }
//////        cout << endl;
//////    }
//////
//////    free(board);*/
//////}
//////
////
////
////
////#include<iostream>
////#include <algorithm>
////#include <vector>
////using namespace std;
////
//////class A
//////{
//////public:
//////    int z, x, c, v, b;
//////    string name;
//////
//////    A(int z, int x, int c, int v, int b, const string& name) : z(z), x(x), c(c), v(v), b(b), name(name) {}
//////
//////    void print()
//////    {
//////        cout << "name is " << name << endl;
//////        cout << "number is " << z << endl;
//////        cout << "score is " << x << endl << "count is" << c << endl << "sum is " << v << endl << "ave is " << b;
//////    }
//////};
////
////int main()
////{
////    vector<int> v = { 1,2,3,4 };
////    vector<int>::iterator p;
////    p = find(v.begin() + 1, v.end() - 2, 1);
////    if (p != v.end())
////    {
////        cout << *p << endl;
////    }
////}
//
//
//
////#include<iostream>
////#include <string>
////#include <algorithm>
////#include <vector>
////using namespace std;
////
////class A
////{
////public:
////    string name;
////    int score;
////
////    A(const string& name, int score) : name(name), score(score) {}
////
////    friend int main();
////    //friend bool Compare(const A& a, const A& b);
////};
////
////bool Compare(const A& a, const A& b)            //const����ӣ���Ȼ���Ŀǰ����Ϊɶ����return����tureʱ��a�����������ʾ����������
////{
////    return a.score < b.score;
////}
////
////int main()
////{
////    A stu[3] = {
////            A("stu1",80),A("stu10",100),A("stu7",20)
////    };
////    //sort(stu[0], stu[3], Compare);
////    cout << "max=" << stu[1].name << " min=" << stu[2].name << endl;
////}
//
//
//
//#include<iostream>
//#include <string>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//void sign(int** c, int** d, vector<char>& a, vector<char>& b, int m, int n) {
//    int i, j;
//    for (i = 0; i <= m; i++)
//        c[i][0] = 0;
//    for (j = 0; j <= n; j++)
//        c[0][j] = 0;
//    for (i = 1; i <= m; i++) {
//        for (j = 1; j <= n; j++) {
//            if (a[i] == b[j]) {
//                c[i][j] = c[i - 1][j - 1] + 1;
//                d[i][j] = 1;//б��
//            }
//            else if (c[i - 1][j] >= c[i][j - 1]) {
//                c[i][j] = c[i - 1][j];
//                d[i][j] = 2;//����
//            }
//            else {
//                c[i][j] = c[i][j - 1];
//                d[i][j] = 3;//����
//            }
//        }
//    }
//}
//
//void print(int** c, int** d, vector<char>& a, vector<char>& e, int m, int n) {
//    if (m <= 0 || n <= 0) {
//        return;
//    }
//    if (d[m][n] == 1) {
//        e.push_back(a[m]);
//        print(c, d, a, e, m - 1, n - 1);
//    }
//    else if (d[m][n] == 2) {
//        print(c, d, a, e, m - 1, n);
//    }
//    else {
//        print(c, d, a, e, m, n - 1);
//    }
//}
//
//int main() {
//    int m, n;
//    cin >> m >> n;
//    int** c;
//    int** d;
//    c = (int**)malloc(sizeof(int*) * (m + 1));
//    d = (int**)malloc(sizeof(int*) * (m + 1));
//    for (int w = 0; w < n + 1; w++) {
//        c[w] = (int*)malloc(sizeof(int) * (n + 1));
//        d[w] = (int*)malloc(sizeof(int) * (n + 1));
//    }
//
//    for (int i = 0; i < m + 1; i++)
//        for (int j = 0; j < n + 1; j++)
//            d[i][j] = 0;
//    vector<char> a = { '0'};
//    vector<char> b = { '0'};
//
//    for (int i = 0; i < m; i++)
//    {
//        char l;
//        cin >> l;
//        a.push_back(l);
//    }
//    for (int i = 0; i < n; i++)
//    {
//        char l;
//        cin >> l;
//        b.push_back(l);
//    }
//    vector<char> e;
//    sign(c, d, a, b, m, n);
//    print(c, d, a, e, m, n);
//    vector<char>::reverse_iterator v;
//    for (v = e.rbegin(); v != e.rend(); v++) {
//        cout << *v;
//    }
//
//    free(c);
//    free(d);
//
//}
//
//
//
//
//
//
//
//
//
//
//
////class A {
////    int a, b;
////public:
////    A(int a, int b) : a(a), b(b) {}
////
////    friend int main();
////};
//
//
////A::A(int a, int b, int c, int d) : a(a), b(b), c(c), d(d) {}
//
////   A a(30,40),b(50,60);
////   cout<<b.a-a.a<<" "<<b.b-a.b<<endl;
////   const char*const name = "hello";
////   char ch = name[3];
////   cout<<ch;

#include<bits/stdc++.h>
using namespace std;


class A
{
public:
    int x;

    A() { x = 1; }
};

class B : virtual  public A
{
public:
    int y;
    B() { y = x + 1; }
};

class C : virtual public A
{
public:
    int z;
    C() { z = x - 1; }
};


class D :public B, public C
{
public:
    int m;
    D() { m = 40; }
};

int main()
{
    D obj;
    cout << "mem size:" << sizeof(obj) << endl;
    int* p = (int*)(&obj);
    cout << "mem content:" << endl;

    for (int i = 0; i < sizeof(obj) / sizeof(int); i++)
        cout << "  " << p[i];
    cout << endl;
    cout << obj.x << "  " << obj.y << " ";
    cout << obj.x << "  " << obj.z << " ";
    cout << obj.m << endl;
    cout << endl;
    return 0;
}

