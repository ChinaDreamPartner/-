//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<iostream>
//#include<vector>
//using namespace std;
//class s
//{
//public:
//    int majorityElement(vector<int>& nums)
//    {
//        return work(nums, 0, nums.size - 1);
//    }
//
//    int count(vector<int>& nums, int goal,int begin,int end)
//    {
//        int n = 0;
//        for (int i=begin;i<=end;i++ )
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
//        int left = work(nums,begin, mid);
//        int right = work(nums, mid + 1, end);
//
//        if (left == right)
//            return left;
//
//        int leftsum = count(nums, left);
//        int rightsum = count(nums, right);
//
//        return leftsum > rightsum ? left : right;
//
//    }
//};
//
//int main()
//{
//
// }