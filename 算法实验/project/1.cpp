//#include <iostream>
//#include <vector>
//#include<algorithm>
//using namespace std;
//
//class Solution
//{
//public:
//    vector<int> smallestK(vector<int>& arr, int k)
//    {
//        if (arr.size() == 0 || k <= 0 || k > arr.size())
//            return {};
//        vector<int> res(k, -1);
//        int i = 0;
//
//        for (int j = 0; j < arr.size();)
//        { //分段排序
//            if (j + k < arr.size())
//                sort(arr.begin() + j, arr.begin() + k + j);
//            else
//                sort(arr.begin() + j, arr.begin() + arr.size());
//            j = j + k;
//        }
//
//        for (; i < k; i++)
//            res[i] = arr[i];
//        while (i < arr.size())
//        {
//            if (i + k < arr.size())
//            {
//                res = exchange(arr, res, i, i + k, k);
//            }
//            else
//            {
//                res = exchange(arr, res, i, arr.size(), k);
//            }
//            i = i + k;
//        }
//        return res;
//    }
//    vector<int> exchange(vector<int> arr, vector<int> res, int begin, int end, int k)
//    {
//        vector<int> ptr(k, 0);
//        int i = begin, j = 0, cur = 0;
//        for (; cur < k && i < end; cur++)
//        {
//            if (arr[i] < res[j])
//                ptr[cur] = arr[i], i++;
//            else
//                ptr[cur] = res[j], j++;
//        }
//        while (cur < k) //让arr数组的最后一段进行有效的比较
//            ptr[cur++] = res[j++];
//        return ptr;
//    }
//};
