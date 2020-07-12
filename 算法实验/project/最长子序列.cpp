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
//                d[i][j] = 1;//–±…œ
//            }
//            else if (c[i - 1][j] >= c[i][j - 1]) {
//                c[i][j] = c[i - 1][j];
//                d[i][j] = 2;//◊Û“∆
//            }
//            else {
//                c[i][j] = c[i][j - 1];
//                d[i][j] = 3;//…œ“∆
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
//    vector<char> a = { '0' };
//    vector<char> b = { '0' };
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
