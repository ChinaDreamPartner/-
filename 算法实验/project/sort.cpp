//#include <iostream>
//#include <math.h>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//void isMax(vector<int>& a, int begin, int end)
//{
//    if (begin == end)
//    {
//        return;
//    }
//    int mid = (begin + end) / 2;
//    isMax(a, begin, mid);
//    isMax(a, mid + 1, end);
//    for (int i = begin; i < end; i++)
//    {
//        for (int j = begin; j < end - i; j++)
//        {
//            if (a[j] < a[j + 1])
//            {
//                int p = a[j];
//                a[j] = a[j + 1];
//                a[j + 1] = p;
//            }
//        }
//    }
//    return;
//}
//
//int main()
//{
//
//    int p;
//    cin >> p;
//    vector<int> a;
//    for (int j = 0; j < p; j++)
//    {
//        int l;
//        cin >> l;
//        a.push_back(l);
//    }
//    vector<int> ::reverse_iterator i;
//    isMax(a, 0, a.size() - 1);
//    for (i = a.rbegin(); i != a.rend(); i++)
//    {
//        cout << *i << ' ';
//    }
//
//}