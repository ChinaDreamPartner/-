//#include<iostream>
//#include <string>
//#include <algorithm>
//#include <vector>
//#include <cstdlib>
//#include<cstdio>
//#include<memory>
//#include <memory.h>
//
//using namespace std;
//
//
//int main() {
//
//    int n;
//    cin >> n;
//    int** c;
//    int** d;
//    int** e;
//    c = (int**)malloc(sizeof(int*) * (n + 1));
//    d = (int**)malloc(sizeof(int*) * (n + 1));
//    e = (int**)malloc(sizeof(int*) * (n + 1));
//    for (int w = 0; w < n + 1; w++) {
//        c[w] = (int*)malloc(sizeof(int) * (n + 1));
//        d[w] = (int*)malloc(sizeof(int) * (n + 1));
//        e[w] = (int*)malloc(sizeof(int) * (n + 1));
//    }
//
//    for (int i = 0; i < n + 1; i++)
//        for (int j = 0; j < n + 1; j++) {
//            d[i][j] = 0;
//            c[i][j] = 0;
//            e[i][j] = 0;
//        }
//    int i, j;
//    for (i = 1; i < n + 1; i++) {
//        for (j = 1; j <= i; j++) {
//            cin >> c[i][j];
//            e[i][j] = c[i][j];
//        }
//    }
//    for (i = n; i > 0; i--) {
//        for (j = i; j > 0; j--) {
//            if (c[i][j] >= c[i][j - 1]) {
//                c[i - 1][j - 1] += c[i][j];
//                d[i - 1][j - 1] = j;
//            }
//            else {
//                c[i - 1][j - 1] += c[i][j - 1];
//                d[i - 1][j - 1] = j - 1;
//            }
//
//        }
//    }
//    cout << c[1][1] << endl;
//    vector<int> w;
//    int p;
//    p = d[1][1];
//    w.push_back(e[1][1]);
//    for (i = 2; i <= n; i++)
//    {
//        w.push_back(e[i][p]);
//        p = d[i][p];
//    }
//    for (auto v : w)
//    {
//        cout << v << ' ';
//    }
//    free(c);
//    free(d);
//    free(e);
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
