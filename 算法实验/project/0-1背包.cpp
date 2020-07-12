//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//typedef struct tt {
//    int weight, price;
//    int order;
//    int decide;
//} tt;
//
//class Bag {
//public:
//    int N, C;
//    int currentWeight, currentValue;
//    int bestValue;
//    int* x, * best;
//    vector<tt> p;
//
//    Bag(int c, int n) : C(c), N(n) {
//        bestValue = 0;
//        currentValue = 0;
//        currentWeight = 0;
//        x = new int[n + 1];
//        best = new int[n + 1];
//    }
//
//    virtual ~Bag();
//
//    void backtrack(int t);
//
//    int bound(int t);
//};
//
//void Bag::backtrack(int t) {
//    if (t > N) {
//        if (currentValue > bestValue) {
//            bestValue = currentValue;
//            for (int i = 1; i <= N; ++i) {
//                best[i] = x[i];
//                p[i].decide = x[i];
//            }
//
//        }
//    }
//    else {
//        if (currentWeight + p[t].weight <= C) {
//            x[t] = 1;
//            currentWeight += p[t].weight;
//            currentValue += p[t].price;
//            backtrack(t + 1);
//            currentWeight -= p[t].weight;
//            currentValue -= p[t].price;
//
//        }
//        if (bound(t + 1) > bestValue) {
//            x[t] = 0;
//            backtrack(t + 1);
//        }
//    }
//}
//
//int Bag::bound(int t) {
//    int cleft = C - currentWeight;
//    int b = currentValue;
//    while (t <= N && p[t].weight <= cleft) {
//        cleft -= p[t].weight;
//        b += p[t].price;
//        t++;
//    }
//    if (t <= N)
//        b += p[t].price * cleft / p[t].weight; //±³°üÎÊÌâ
//    return b;
//}
//
//Bag::~Bag() {
//    delete x;
//    delete best;
//}
//
//
//bool compare(tt t1, tt t2) {
//    float a = (float)(t1.price) / t1.weight;
//    float b = (float)(t2.price) / t2.weight;
//    return a > b;
//}
//
//bool comp(tt t1, tt t2) {
//    return t1.order < t2.order;
//}
//
//int main() {
//    int c, n;
//    cin >> c >> n;
//    Bag bag(c, n);
//    tt m;
//    m.price = -1;
//    m.weight = -1;
//    bag.p.push_back(m);
//
//    for (int i = 1; i <= n; i++) {
//        tt t;
//        cin >> t.weight;
//        bag.p.push_back(t);
//    }
//    for (int i = 1; i <= n; i++) {
//        int t;
//        cin >> t;
//        bag.p[i].price = t;
//        bag.p[i].order = i;
//    }
//    sort(bag.p.begin() + 1, bag.p.end(), compare);
//    bag.backtrack(1);
//    sort(bag.p.begin() + 1, bag.p.end(), comp);
//    cout << bag.bestValue << endl;
//    for (int i = 1; i <= n; i++) {
//        cout << bag.p[i].decide << " ";
//    }
//}