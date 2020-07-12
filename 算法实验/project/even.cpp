//#include <iostream>
//#include <vector>
//using namespace std;
//int even(vector<int> a, int begin, int end)
//{
//
//	if (begin == end)
//	{
//		if (a[begin] % 2 == 0)
//		{
//
//			return 1;
//		}
//		else
//		{
//			return 0;
//		}
//	}
//	int mid = (begin + end) / 2;
//	int left, right;
//	left = even(a, begin, mid);
//	right = even(a, mid + 1, end);
//
//	return left + right;
//}
//
//int main()
//{
//	vector<int> a = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	cout << even(a, 0, a.size() - 1);
//}