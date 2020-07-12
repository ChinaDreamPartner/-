//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//    vector<int> a, m;
//    for (int i = 0; i < n; i++)
//    {
//        int b;
//        cin >> b;
//        a.push_back(b);
//    }
//    sort(a.begin(), a.end());
//    int sum = 0;
//    vector<int> ::iterator p;
//    p = a.begin();
//    while (p != a.end())
//    {
//        sum += *p;
//        m.push_back(sum);
//        p++;
//    }
//    p = m.begin();
//    sum = 0;
//    while (p != m.end())
//    {
//        sum += *p;
//        p++;
//    }
//    printf("%.2f", (float)(sum) / n);
//};