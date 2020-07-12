//
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
//    int a, b;
//    cin >> a >> b;
//    vector<int> c;
//    for (int i = 0; i <= b; i++) {
//        int m;
//        cin >> m;
//        c.push_back(m);
//    }
//    int d = a;
//    int tag = 0;
//    vector<int>::iterator p;
//    p = c.begin();
//    while (p != c.end()) {
//        if ((d - *p) > * (p + 1)) {
//            d -= *p;
//        }
//        else {
//            d = a;
//            tag++;
//        }
//        p++;
//    }
//    cout << tag << endl;
//}
//
//
//
