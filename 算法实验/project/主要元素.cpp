//#include <iostream>
//#include<vector>
//#include<iterator>
//using namespace std;
//
//class Solution {
//public:
//
//    int majorityElement(vector<int>& nums)
//    {
//
//        int name = work(nums, 0, nums.size() - 1);
//        int mid = (nums.size() - 1) >> 1;
//        if (count(nums, name, 0, nums.size() - 1) > mid)
//            return -1;
//        else
//            return name;
//    }
//
//    int count(vector<int>& nums, int goal, int begin, int end)
//    {
//        int n = 0;
//        for (int i = begin; i <= end; i++)
//        {
//            if (nums[i] == goal)
//            {
//                n++;
//            }
//        }
//        return n;
//    }
//    int work(vector<int>& nums, int begin, int end)
//    {
//        int mid = (begin + end) / 2;
//
//        if (begin == end)
//        {
//            return nums[begin];
//        }
//        int left = work(nums, begin, mid);
//        int right = work(nums, mid + 1, end);
//
//        if (left == right)
//            return left;
//
//        int leftsum = count(nums, left, 0, mid);
//        int rightsum = count(nums, right, mid + 1, right);
//
//        return leftsum > rightsum ? left : right;
//
//    }
//};
//
//int main()
//{
//    vector<int> a = { 3,2,3 };
//    Solution m;
//    m.majorityElement(a);
//}