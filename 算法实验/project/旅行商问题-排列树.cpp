//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//class Traveling {
//    friend int TSP(int**, int[], int, int, vector<int>&);
//
//private:
//    void Backtrack(int i);
//
//    void Swap(int* a, int* b);
//
//    int n, * x, * bestx;
//    int** a, cc, bestc, NoEdge;
//};
//
//void Traveling::Swap(int* a, int* b) {
//    int t;
//    t = *a;
//    *a = *b;
//    *b = t;
//}
//
//void Traveling::Backtrack(int i) {
//    if (i == n) {
//        if (a[x[n - 1]][x[n]] != NoEdge && a[x[n]][1] != NoEdge &&
//            (cc + a[x[n - 1]][x[n]] + a[x[n]][1] < bestc || bestc == NoEdge)) {
//            for (int j = 1; j <= n; j++) bestx[j] = x[j];
//            bestc = cc + a[x[n - 1]][x[n]] + a[x[n]][1];
//        }
//    }
//    else {// 是否可进入x[j]子树?
//        for (int j = i; j <= n; j++) // 搜索子树
//            if (a[x[i - 1]][x[j]] != NoEdge && (cc + a[x[i - 1]][x[j]] < bestc || bestc == NoEdge)) {
//                Swap(&x[i], &x[j]);
//                cc += a[x[i - 1]][x[i]];
//                Backtrack(i + 1);
//                cc -= a[x[i - 1]][x[i]];
//                Swap(&x[i], &x[j]);
//            }
//    }
//}
//
//int TSP(int** a, int v[], int n, int NoEdge, vector<int>& pp) {
//    Traveling Y;
//    Y.x = new int[n + 1];
//    for (int i = 1; i <= n; i++)
//        Y.x[i] = i;
//    Y.a = a;
//    Y.n = n;
//    Y.bestc = NoEdge;
//    Y.bestx = v;
//    Y.cc = 0;
//    Y.NoEdge = NoEdge;
//    //搜索x[2:n]的全排列
//    Y.Backtrack(2);
//    for (int i = 1; i <= n; i++) {
//        pp.push_back(Y.bestx[i]);
//    }
//    delete[] Y.x;
//    return Y.bestc;
//}
//
//int main() {
//    int** a, * v, n, NoEdge;
//    NoEdge = 1000;
//    //printf("input n:");
//    cin >> n;
//    v = new int[n + 1];
//    a = (int**)malloc((n + 1) * sizeof(int*));
//    for (int i = 1; i <= n; i++)
//        a[i] = (int*)malloc((n + 1) * sizeof(int));
//
//    for (int i = 1; i <= n; i++)
//        for (int j = 1; j <= n; j++)
//            cin >> a[i][j];
//    vector<int> pp;
//    n = TSP(a, v, n, NoEdge, pp);
//    cout << n << endl;
//    for (auto y : pp) {
//        cout << y << " ";
//    }
//}
//
//
